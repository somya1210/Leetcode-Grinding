class Solution {
public:
    int rob(vector<int>& nums) {
        // 1 2 3 1
      /*    int n=nums.size();
        // 1 2 max(3+1,2) max(1,1+2,3)
    // 1 2 3 1 1 2 3 1
    // 1 2 4 4 5 6 8 8
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        vector<int>dp(2*nums.size());
        int temp[200]={0};
        for(int i=0;i<=n-1;i++)
        {
            temp[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            temp[i+n]=nums[i];
        }
        dp[0]=nums[0],dp[1]=max(nums[0],nums[1]);
     for(int i=2;i<2*nums.size();i++)
        {
         dp[i]=max(temp[i]+dp[i-2],dp[i-1]);
        }
      // 200 3 140 20 10 200 3 140 20 10 
      // 200 200 340 340 350 
        
        return dp[2*n-1]/2;
     */   
        // house 1 and house n are adjacent so they cannot be robbed together , so th eproblem boils down to simply finding out that we can rob from 1 to n-1 2 to n
        
    // 200 3 140 20 10 
        int n=nums.size();
        vector<int>dp(n);
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        // 1 2 3 1
        dp[0]=nums[0],dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n-1;i++)
        {
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        int ans=dp[n-2];
        if(n==3)
        {
            return max(ans,max(nums[1],nums[2]));
        }
        // 1 2 3 4 
       for(int i=0;i<n;i++)
           dp[i]=0;
        dp[1]=nums[1],dp[2]=max(nums[1],nums[2]);
        for(int i=3;i<n;i++)
        {
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        ans=max(ans,dp[n-1]);
        return ans;
    }
    // constraint - first robbery last m nhi ,last m to first m nhi
};