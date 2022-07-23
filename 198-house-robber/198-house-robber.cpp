class Solution {
public:
    int rob(vector<int>& nums) {
       /* int ps=nums[0],nps=0;
        int ans=max(ps,nps);
        int cs=0,ncs=0;
        for(int i=1;i<nums.size();i++)
        { 
            cs=nums[i]+nps;
            ncs=ps;
            ans=max(cs,ncs);
            ps=cs;
            nps=ncs;
            
        }
        //ans=max(cs,ncs);
        return ans;*/
       /* int n=nums.size();
        vector<int>dp(n,-1);
   //     memset(dp,sizeof(dp),-1);
        int ans=find(n-1,nums,dp);
        return ans;
        */
        int n=nums.size();
        vector<int>dp(n,0);
        if(n==1)
            return nums[0];
        dp[0]=nums[0],dp[1]=max(nums[1],dp[0]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
       // int ans=max(dp[n-1],dp[n-2]);
        return dp[n-1];
    }
    int find(int i,vector<int>&ar,vector<int>&dp)
    {
        if(i<0||i>=ar.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int select_curr=ar[i]+find(i-2,ar,dp);
        int not_select_curr=find(i-1,ar,dp);
        dp[i]=max(select_curr,not_select_curr);
        return dp[i];
        
    }
};