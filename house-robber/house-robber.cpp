class Solution {
public:
    int rob(vector<int>& nums) {
      /*  int sumodd=0,sumeven=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
                sumodd+=nums[i];
            else
                sumeven+=nums[i];
        }
        if(sumodd>sumeven)
            return sumodd;
        return sumeven; 
        */
        vector<int>dp(nums.size(),0);
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
        {
            return max(nums[0],nums[1]);
        }
        int mx=max(nums[0],nums[1]);
        dp[0]=nums[0],dp[1]=mx;
        for(int i=2;i<nums.size();i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[nums.size()-1];
        
    }
    // 1 3 , 2 1 
    // 2 7 
    // 1 2 3 4 5 
    //  2 1 1 2 
    //  2 1 max(1+dp[i-2],dp[i-1])
    // 2 1 3 max(2+dp[i-2],dp[i-1])
    // 2 1 3 max(2+)
};