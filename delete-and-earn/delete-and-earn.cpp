class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
     // 2 2 3 3 3 4
        // 2 
        // difficult to think about the transformation to house robber problem
        int sums[10002]={0};
        for(int i=0;i<nums.size();i++)
        {
            sums[nums[i]]+=nums[i];
        }
        // 0 0 2 3 4 
        // 0 0 2 3 6
        vector<int>dp(10002,0);
        int n=nums.size();
        dp[0]=sums[0];
        dp[1]=max(sums[1],sums[0]);
        for(int i=2;i<10002;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+sums[i]);
        }
        return dp[10000];
    // 4 9
    }
};