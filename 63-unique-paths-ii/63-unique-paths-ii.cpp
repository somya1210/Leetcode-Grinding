class Solution {
public:
    int dp[101][101];
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
         int ans=0;
           // vector<int>inter;
        memset(dp,-1,sizeof(dp));
        int n=grid.size(),m=grid[0].size();
            return find(grid,ans,0,0,n,m);
            
    }
    int find(vector<vector<int>> &grid,int &ans,int i,int j,int n,int m)
    {
        if(i<0||j<0||i>=n||j>=m||grid[i][j]==1)
         return 0 ;
        if(i==n-1&&j==m-1)
         {   
             return 1;
         }
       if(dp[i][j]!=-1)
           return dp[i][j];
        int down=find(grid,ans,i+1,j,n,m);
         int right=find(grid,ans,i,j+1,n,m);
        return dp[i][j]=down+right;
    }
};