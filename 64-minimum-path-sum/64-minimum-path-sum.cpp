class Solution {
public:
    int dp[201][201];
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return find(0,0,grid);
        
    }
    int find(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size())
            return INT_MAX;
        if(i+1==grid.size()&&j+1==grid[0].size())
        {
            return dp[i][j]=grid[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int right=find(i,j+1,grid);
        int down=find(i+1,j,grid);
        int ans=min(right,down)+grid[i][j];
        dp[i][j]=ans;
        return ans;
    }
};