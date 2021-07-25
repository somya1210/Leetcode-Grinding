class Solution {
public:
            // sign flip 
 long long dp[100001][2];
    long long help(vector<int>&nums,int i,int flag)
    {
        if(i==nums.size())
            return 0;
        if(dp[i][flag]!=INT_MIN)
            return dp[i][flag];
        long long notchose_curr=help(nums,i+1,flag);
        long long chose_curr=0;
        if(flag==1)
            chose_curr+=nums[i];
        else
            chose_curr-=nums[i];
        chose_curr+=help(nums,i+1,1-flag);
        dp[i][flag]=max(chose_curr,notchose_curr);
        return dp[i][flag];
        
    }
    long long maxAlternatingSum(vector<int>& nums) {

        for(int i=0;i<100001;i++)
        {
            dp[i][0]=INT_MIN,dp[i][1]=INT_MIN;
        }
        return help(nums,0,1);
    }
};