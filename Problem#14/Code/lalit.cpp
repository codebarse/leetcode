class Solution {
public:

    int min(int a, int b)
    {
        if (a<b)
            return a;
        return b;
    }



    string longestCommonPrefix(vector<string>& strs) {
        
        int len = strs.size();

        if (len == 0)
            return "";
        
        sort(strs.begin(), strs.end());
        
        // for (int i=0; i<len; i++)
        //     cout<<strs[i]<<" ";


        // find the prefix in the first string and the last string 

        int small = min(strs[0].size(), strs[len-1].size());

        int i=0;
        while (i<small && strs[0][i]==strs[len-1][i])
        {
            i++;
        }
        
        
        
        return strs[0].substr(0,i);
        
        
    }
};
