class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        
        vector<int> dp(n);
        
        //dp[0]=cost[0];
        // dp[1]=cost[1];
        
        for (int i=2; i<n; i++)
        {
            cost[i] = cost[i] + min(cost[i-1], cost[i-2]);
        }
        
        return min(cost[n-1], cost[n-2]);
        
    }
};
