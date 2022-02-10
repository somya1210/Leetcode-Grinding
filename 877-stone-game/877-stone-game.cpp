class Solution {
public:
    int dp[501][501];
    bool stoneGame(vector<int>& piles) {
        int s=0;
        for(int i=0;i<piles.size();i++)
            s+=piles[i];
        memset(dp,-1,sizeof(dp));
        
        int ans=solve(0,piles.size()-1,piles);
            if(ans>s/2)
                return true;
        return false;
      
    }
    int solve(int i,int j,vector<int>&p)
    {
        if(i>j)
            return 0;
        if(i==j)
            return p[i];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int take_first=p[i]+solve(i+1,j,p);
        int take_last=p[j]+solve(i,j-1,p);
        return dp[i][j]=max(take_first,take_last);
    }
    // 5 3 4 5 
  
    
};