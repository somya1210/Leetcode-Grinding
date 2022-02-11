class Solution {
public:
    int dp[101][300];
    int stoneGameII(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int diff=solve(piles,0,1);
        int sum=0;
        
        for(int i=0;i<piles.size();i++)
            sum+=piles[i];
        int ans=(sum+diff)/2;
        return ans;
    }
    int solve(vector<int>&p,int i,int m)
    {
        if(i>=p.size())
            return 0;
        if(dp[i][m]!=-1)
            return dp[i][m];
        int ans=INT_MIN,tot=0;
        for(int j=1;j<=2*m;j++)
        { if(i+j-1<p.size())
            tot+=p[i+j-1];
         ans=max(ans,tot-solve(p,i+j,max(m,j)));
        }
        return dp[i][m]=ans;
    }

    
};