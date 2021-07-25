class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_i=0;
      
        int ans=0;
        int n=prices.size();
         vector<int>dp(n,0);
         dp[0]=prices[0];
         for(int i=1;i<prices.size();i++)
         {
             dp[i]=min(dp[i-1],prices[i]);
         }
        for(int i=0;i<prices.size();i++)
        {
            ans=max(prices[i]-dp[i],ans);
        }
        // dp-> 7 1 1 1 1 1 
        
        return ans;
    }
    
};