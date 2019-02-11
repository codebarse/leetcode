class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n = strs.size();
        string ans = "";
        if(n==0) return ans;
        for(int j=0;j<strs[0].size();j++)
        {
            char ch = strs[0][j];
            for(int i=0;i<n;i++)
            {
                int m = strs[i].size();
                if(j>=m || strs[i][j] != ch)
                    return ans;
            }
            ans+=ch;
        }
        return ans;
    }
};