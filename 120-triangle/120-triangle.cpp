class Solution {
public:
    int dp[201][201];//={-1};
    int minimumTotal(vector<vector<int>>&t) {
        memset(dp,-1,sizeof(dp));
   //     int n=triangle.size();//,m=triangle[0].size()
    return find(0,0,t);
    }
    int find(int i,int j,vector<vector<int>>&t)
    {
        if(i==t.size()-1)
            return t[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int findone=find(i+1,j,t);
        int findtwo=find(i+1,j+1,t);
        return dp[i][j]=min(findone,findtwo)+t[i][j];
    }
    
};