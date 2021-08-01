class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // 
        vector<int>dp(cost.size(),0);
        int n=cost.size();
        dp[0]=cost[0];
        dp[1]=cost[1];
        if(n==2)
            return min(dp[0],dp[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[n-1],dp[n-2]);
    }
};