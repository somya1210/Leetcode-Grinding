class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>&grid)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size())
            return 0;
        if(grid[i][j]!=1)
            return 0;
        grid[i][j]=2;
        int ans=1;
        ans+=dfs(i+1,j,grid);
        ans+=dfs(i-1,j,grid);
        ans+=dfs(i,j+1,grid);
        ans+=dfs(i,j-1,grid);
        return ans;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     int ans=0;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    ans=max(ans,dfs(i,j,grid));
                }
            }
        }
        return ans;
    }
};