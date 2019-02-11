class Solution {
public:
    
    int max(int a, int b)
    {
        if (a>b)
            return a;
        return b;
    }
    
    bool isMatch(string s, string p) {
        
        
        
        if (p == ".*")
            return true;
        
        int string_size = s.size();
        int pat_size = p.size();
        
        int dp[string_size+1][pat_size+1];
        
        dp[0][0] = 1;
        
        // initialize the first row
        for (int i=1; i<=pat_size; i++)
        {
            if (p[i-1] == '*')
                dp[0][i] = dp[0][i-2];
            else
                dp[0][i] = 0;
            //dp[0][i] = 0;
        }
        
        // initialize the first column
        for (int i=1; i<=string_size; i++)
            dp[i][0] = 0;
        
        for (int i=1; i<=string_size; i++)
        {
            for (int j=1; j<=pat_size; j++)
            {
                if (s[i-1] == p[j-1] || p[j-1] == '.')
                    dp[i][j] = dp[i-1][j-1];
                else if (p[j-1] == '*')
                {
                    // check for 0 occurences 
                    if (dp[i][j-2] == 1)
                        dp[i][j] = 1;
                    else if (s[i-1] == p[j-2] || p[j-2] == '.')
                    {
                        if (dp[i-1][j] == 1)
                            dp[i][j] = 1;
                        else 
                            dp[i][j] = 0;
                    }
                    else
                        dp[i][j] = 0;
                }
                else
                    dp[i][j] = 0;
                    
            }
        }
        
       // print dp 
        // for (int i=0; i<=string_size; i++)
        // {
        //     for (int j=0; j<=pat_size; j++)
        //         cout<<dp[i][j]<<" ";
        //     cout<<endl;
        // }
        
        if (dp[string_size][pat_size] == 0)
            return false;
        return true;
        
    }
};
