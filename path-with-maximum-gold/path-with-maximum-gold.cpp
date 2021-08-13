class Solution {
public:
    //int dp[16][16];
    int find(int i,int j,vector<vector<int>>&m,vector<vector<int>>&dp)
    {
        if(i<0||j<0||i>=m.size()||j>=m[0].size())
          return 0;
        if(m[i][j]==0)
            return 0;
        int t=m[i][j];
        m[i][j]=0;
        int a=find(i-1,j,m,dp);
        int b=find(i+1,j,m,dp);
        int c=find(i,j+1,m,dp);
        int d=find(i,j-1,m,dp);
        m[i][j]=t;
        int max1=max(a,b);
        int max2=max(max1,c);
        int max_ans=max(max2,d);
        return m[i][j]+max_ans;
        
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
         int ans=0;
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size()));
        //int dp[16][16];
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            { 
                dp[i][j]=-1;
            }
        }
        
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            { if(grid[i][j]!=0)
                ans=max(ans,find(i,j,grid,dp));
            }
        }
        return ans;
    }
};