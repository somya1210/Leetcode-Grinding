class Solution {
public:
/*    int find(vector<int>&coins,int amount)
    {   if(amount<0)
         return 0;
        if(amount==0)
            return 1;
        int coin=0;
        for(int i=0;i<coins.size();i++)
        {
            coin+=find(coins,amount-coins[i]);
                
        }
        return coin;
    }
    */
    int coinChange(vector<int>& coins, int amount) {
        // coin change 
        vector<int>dp(amount+1);
        //long long dp[amount+1];
        for(int i=0;i<=amount;i++)
            dp[i]=amount+1;
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            for(int  j=0;j<coins.size();j++)
            {
                if(i>=coins[j])
                    dp[i]=min(dp[i],1+dp[i-coins[j]]);
            }
        }
      //  int ans=find(coins,amount);
        //return ans;
    return dp[amount]>amount?-1:dp[amount];
    }
};