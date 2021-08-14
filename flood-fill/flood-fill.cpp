class Solution {
public:
    void dfs(int i,int j,int color,vector<vector<int>>& grid,int oldcolor)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size())
            return;
        if(grid[i][j]==color)
            return;
        if(grid[i][j]!=oldcolor)
            return;
        grid[i][j]=color;
        dfs(i+1,j,color,grid,oldcolor);
        dfs(i-1,j,color,grid,oldcolor);
        dfs(i,j+1,color,grid,oldcolor);
        dfs(i,j-1,color,grid,oldcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
     dfs(sr,sc,newColor,image,image[sr][sc]);
         return image;
    }
};