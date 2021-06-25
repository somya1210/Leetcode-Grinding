class Solution {
public:
    int path(int m,int n,int move,int i,int j,vector<vector<vector<int>>> &dp)
    {  if(move<0)
        return 0;
      
        if((i<0||j<0||j>=n||i>=m))
    {  
       
        return 1;
    }   
      if(dp[i][j][move]!=-1)
            return dp[i][j][move];
        
       
        
         long long a=path(m,n,move-1,i-1,j,dp);
          long long b=path(m,n,move-1,i+1,j,dp);
            long long c=path(m,n,move-1,i,j-1,dp);
            long long d=path(m,n,move-1,i,j+1,dp);
     return dp[i][j][move]=(a+b+c+d)%(1000000007);
        
            
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int ans=0;
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(maxMove+1,-1)));

     return path(m,n,maxMove,startRow,startColumn,dp)%(1000000007);
        
    }
};