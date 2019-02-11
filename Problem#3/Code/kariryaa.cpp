class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int map[256]={0};
        int len = s.size();
        int start=0, end=0;
        int maxLen = 0;
        for(int start=0, end=0;end<len;end++)
        {
            int loc = s[end];
            map[loc]++;
            while(map[loc]>1){map[s[start++]]--;}
            if(end-start+1>maxLen)
            {
                maxLen=end-start+1;
            }
        }
        return maxLen;
    }
};