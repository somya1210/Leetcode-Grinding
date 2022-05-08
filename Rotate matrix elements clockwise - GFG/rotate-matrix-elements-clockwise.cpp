// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> mat) {
        // code here
      /*   vector<vector<int>>ans=Mat;
        int left=0,right=N-1;
        int top=0,bottom=M-1;
        int prev,curr;
        while(left<right&&top<bottom)//ans.size()<M*N)
        {
            if(left==right||top==bottom)
            break;
            prev=Mat[top+1][left];
            for(int i=left;i<=right;i++)
            {
                curr=Mat[top][i];
                Mat[top][i]=prev;
                prev=curr;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                curr=Mat[i][right];
                Mat[i][right]=prev;
                prev=curr;
            }
            right--;
            if(top<bottom)
           { for(int i=right;i>=left;i--)
            {
                curr=Mat[bottom][i];
                Mat[bottom][i]=prev;
                prev=curr;
            }
            
           }
           bottom--;
            if(left<right)
            {for(int i=bottom;i>=top;i--)
            {
                curr=Mat[i][left];
                Mat[i][left]=prev;
                prev=curr;
            }
            }
            left++;
            
        }
        ans=Mat;
        return ans;
        */
        vector<vector<int>> result= mat;
int row = 0, col = 0;
int prev, curr;
int lastRow= M;
int lastCol= N;
while (row < lastRow && col < lastCol)

{
if (row + 1 == lastRow || col + 1 == lastCol) break;

prev = mat[row + 1][col];
//for the first row which is in bounds
for (int i = col; i < lastCol; i++)
{
curr = mat[row][i];
mat[row][i] = prev;
prev = curr;
}
row++;
//for the last column which is in bounds
for (int i = row; i < lastRow; i++)
{
curr = mat[i][lastCol-1];
mat[i][lastCol-1] = prev;
prev = curr;
}
lastCol--;
//for the last row which is in bounds
if (row < lastRow)
{
for (int i = lastCol-1; i >= col; i--)
{
curr = mat[lastRow-1][i];
mat[lastRow-1][i] = prev;
prev = curr;
}
}
lastRow--;
//for the first row which is in bounds
if (col < lastCol)
{
for (int i = lastRow-1; i >= row; i--)
{
curr = mat[i][col];
mat[i][col] = prev;
prev = curr;
}
}
col++;
}
result = mat;
return result;
}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, Mat);
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends