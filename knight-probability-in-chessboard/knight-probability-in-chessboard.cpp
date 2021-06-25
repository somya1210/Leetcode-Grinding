class Solution {
public:
    double find(int n,int k,int i,int j,vector<vector<vector<double>>>&dp)
    {
    
        if(i<0||j<0||i>=n||j>=n)
        {
        return 0;
        }
        if(k==0)
            return 1;
        if(dp[i][j][k]!=-1)
            return dp[i][j][k];
        double a=find(n,k-1,i-2,j-1,dp)+find(n,k-1,i-2,j+1,dp)+find(n,k-1,i+2,j-1,dp)+find(n,k-1,i+2,j+1,dp)+find(n,k-1,i-1,j-2,dp)+find(n,k-1,i-1,j+2,dp)+find(n,k-1,i+1,j-2,dp)+find(n,k-1,i+1,j+2,dp);
        return dp[i][j][k]=a/8;
        
    }
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>>dp(n,vector<vector<double>>(n,vector<double>(k+1,-1)));
     
    double    total=find(n,k,row,column,dp);
        
        return total;
        }
};