// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> Mat) {
        // code here
         vector<vector<int>>ans=Mat;
        int left=0,right=N-1;
        int top=0,bottom=M-1;
        int prev,curr;
        while(left<=right&&top<=bottom)//ans.size()<M*N)
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
            if(top<=bottom)
           { for(int i=right;i>=left;i--)
            {
                curr=Mat[bottom][i];
                Mat[bottom][i]=prev;
                prev=curr;
            }
            
           }
           bottom--;
            if(left<=right)
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