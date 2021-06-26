class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int sum=0;
        int N=arr.size();
        for(int i=0;i<N;i++)
         sum+=arr[i];
        if(sum%2!=0)
         return 0;
         sum=sum/2;
        vector<vector<int>>dp(N+1,vector<int>(sum+1,-1));
       
        
        int ans=find(arr,N,sum,dp);
        return ans;
    }
    int find(vector<int>&arr,int n,int sum, vector<vector<int>>&dp)
    {
        if(sum==0)
        return 1;
        if(n<=0)
         return 0;
        if(dp[n][sum]!=-1)
         return dp[n][sum];
        if(arr[n-1]>sum)
         return dp[n][sum]=find(arr,n-1,sum,dp);
        return dp[n][sum]=find(arr,n-1,sum,dp)||find(arr,n-1,sum-arr[n-1],dp);
    }
    
};