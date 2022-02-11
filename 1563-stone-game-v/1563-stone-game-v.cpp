class Solution {
public:
    int dp[501][501];
    int stoneGameV(vector<int>& stoneValue) {
        int n=stoneValue.size();
        vector<int>prefixsum(n+1,0);
        prefixsum[0]=0;
        for(int i=0;i<stoneValue.size();i++)
        {
            prefixsum[i+1]=stoneValue[i]+prefixsum[i];
        }
        memset(dp,-1,sizeof(dp));
        int ans=solve(stoneValue,0,n-1,prefixsum);
        return ans;
    }
    int solve(vector<int>&s,int i,int j,vector<int>&prefix)
    {
        if(i==j)
          return 0;
        int ans=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        dp[i][j]=0;
        for(int k=i+1;k<=j;k++)
        { //r=prefixSum[j+1]-prefixSum[p];
            int left=prefix[k]-prefix[i];
            int right=prefix[j+1]-prefix[k];
            if(left<right)
                ans=max(ans,left+solve(s,i,k-1,prefix));
            else
            if(left>right)
                ans=max(ans,right+solve(s,k,j,prefix));
            else
            {// ,l+max(dp(stoneValue,p,j),dp(stoneValue,i,p-1)));
                ans=max(ans,left+max(solve(s,k,j,prefix),solve(s,i,k-1,prefix)));
            }
        }
        return dp[i][j]=ans;
    }

};