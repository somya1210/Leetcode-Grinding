class Solution {
public:
    int dp[201][201];
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
     memset(dp,-1,sizeof(dp));
       return solve(0,0,dungeon);
        //return dp[0][0];
        
    }
    int solve(int i,int j,vector<vector<int>>& dungeon)
    {
        if(i>=dungeon.size()||j>=dungeon[0].size())
            return INT_MAX;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int right=solve(i,j+1,dungeon);
        int down=solve(i+1,j,dungeon);
        int so_next_way=min(right,down);
        if(so_next_way==INT_MAX)
            so_next_way=1;
        int including_this_pos=so_next_way-dungeon[i][j];
        if(including_this_pos<=0)
            including_this_pos=1;
        return dp[i][j]=including_this_pos;
    }
    
};