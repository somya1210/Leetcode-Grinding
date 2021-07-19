class Solution {
public:
    int fun(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0||grid[i][j]==2)
            return 0;
        int ans=1;
        grid[i][j]=2;
        ans+=fun(grid,i-1,j);
        ans+=fun(grid,i+1,j);
        ans+=fun(grid,i,j+1);
        ans+=fun(grid,i,j-1);
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int find=fun(grid,i,j);
                    ans=max(ans,find);
                }
            }
        }
        return ans;
    }
};