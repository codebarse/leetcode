class Solution {
public:

    int max(int a, int b)
    {
        if (a>b)
            return a;
        return b;
    }

    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int i=0, j=0;

        set<char> myset;

        while (j<s.size())
        {
            if (myset.find(s[j]) == myset.end()) 
            {
                myset.insert(s[j]);
                j++;
                max_len = max(max_len,myset.size());
                // cout<<"set size"<<myset.size()<<endl;
                // cout<<"max:"<<max_len<<endl;
                continue;
            }

            myset.erase(s[i]);
            i++;
        }

        return max_len;
    }
};
