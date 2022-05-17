class Solution {
public:
    int dp[101][101];
    int minFallingPathSum(vector<vector<int>>& matrix) {
        memset(dp,-1,sizeof(dp));
        int ans=INT_MAX;
       for(int i=0;i<matrix[0].size();i++)
       {
           ans=min(ans,find(0,i,matrix));
       }
        return ans;
    }
    int find(int i,int j,vector<vector<int>>&mat)
    {
        if(i<0||j<0||i>=mat.size()||j>=mat[0].size())
            return INT_MAX;
        if(i==mat.size()-1)
            return mat[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int leftd=find(i+1,j-1,mat);
        int rightd=find(i+1,j+1,mat);
        int bottom=find(i+1,j,mat);
        int ans=min(leftd,min(rightd,bottom))+mat[i][j];
        dp[i][j]=ans;
        return ans;
        
    }
};