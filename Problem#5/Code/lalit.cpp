class Solution {
public:
    string longestPalindrome(string s) {

        int len = s.size();
        if (len < 2)
            return s;

        bool dp[len][len] = {false};
        int right = 0;
        int left = 0;
        
        // display the dp array 
        // for (int i=0; i<len; i++)
        // {
        //     for (int j=0; j<len; j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        for (int j=1; j<len; j++)
        {
            for (int i=0; i<j; i++)
            {
                bool innerPalindrome = (dp[i+1][j-1] || (j-i)<=2);

                if (s[i] == s[j] && innerPalindrome)
                {   
                    //cout<<"inside if"<<endl;
                    dp[i][j] = true;

                    if (j-i > right - left)
                    {
                        right = j;
                        left = i;
                    }
                }
            }
        }
        
        // display the dp array 
//         for (int i=0; i<len; i++)
//         {
//             for (int j=0; j<len; j++)
//             {
//                 cout<<dp[i][j]<<" ";
//             }
//             cout<<endl;
//         }
        
        // bool x = true;
        // cout<<x<<endl;

        return s.substr(left, right - left +1);
        
    }
};
