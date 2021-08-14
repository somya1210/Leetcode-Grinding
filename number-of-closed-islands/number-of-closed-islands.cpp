class Solution {
public:
    bool dfs(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size())
            return false;
        if(grid[i][j]==1)
            return true;
        grid[i][j]=1;
        bool b1=dfs(i+1,j,grid);
        bool b2=dfs(i-1,j,grid);
        bool b3=dfs(i,j+1,grid);
        bool b4=dfs(i,j-1,grid);
        return b1&&b2&&b3&&b4;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
                if(grid[i][j]==0)
                res+=dfs(i,j,grid)?1:0;
        }
        return res;
    }
};