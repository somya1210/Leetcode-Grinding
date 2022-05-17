class Solution {
public:
    int dp[201]={0};
    int minimumTotal(vector<vector<int>>&t) {
        
      int n=t.size();//,m=triangle[0].size()
       for(int row=n-1;row>=0;row--)
       {
           for(int col=0;col<t[row].size();col++)
           {
              dp[col]=t[row][col]+min(dp[col],dp[col+1]); 
           }
       }
        return dp[0];
    }
 
};