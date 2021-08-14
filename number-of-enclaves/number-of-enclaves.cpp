class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size())
            return;
        if(grid[i][j]==0||grid[i][j]==2)
            return;
        grid[i][j]=2;
      //  vis[i][j]=true;
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        // boundary 1s
        int n=grid.size(),m=grid[0].size();
        
        for(int i=0;i<grid.size();i++)
        { if(grid[i][0]==1)
            dfs(i,0,grid);
          if(grid[i][m-1]==1)
            dfs(i,m-1,grid);
        }
         for(int i=0;i<grid[0].size();i++)
        {  if(grid[0][i]==1)
            dfs(0,i,grid);
          if(grid[n-1][i]==1)
            dfs(n-1,i,grid);
        }
        int ans=0;
         for(int i=0;i<grid.size();i++)
        { 
             for(int j=0;j<grid[0].size();j++)
        { 
        if(grid[i][j]==1)
            ans++;
        }
        }
        return ans;
    }
};