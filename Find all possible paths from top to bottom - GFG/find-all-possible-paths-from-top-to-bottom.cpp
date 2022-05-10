// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
            vector<vector<int>>ans;
            vector<int>inter;
            find(grid,ans,0,0,inter,n,m);
            return ans;
    }
    void find(vector<vector<int>> &grid, vector<vector<int>>&ans,int i,int j,vector<int>x,int n,int m)
    {
        if(i<0||j<0||i>=n||j>=m)
         return ;
        if(i==n-1&&j==m-1)
         {   x.push_back(grid[i][j]);
             ans.push_back(x);
             return;
         }
         x.push_back(grid[i][j]);
         find(grid,ans,i+1,j,x,n,m);
         find(grid,ans,i,j+1,x,n,m);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends