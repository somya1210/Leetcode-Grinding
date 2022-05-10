// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        string x="";
        find(m,0,0,ans,x,n);
        return ans;
    }
    void find(vector<vector<int>> &m,int i,int j,vector<string>&ans,string x,int n)
    {
        if(i<0||j<0||i>=n||j>=n||m[i][j]==0||m[i][j]==2)
         return;
        
        if(i==n-1&&j==n-1)
        {
            ans.push_back(x);
            return;
        }
        
        m[i][j]=2;
        find(m,i,j+1,ans,x+'R',n);
        find(m,i+1,j,ans,x+'D',n);
        find(m,i-1,j,ans,x+'U',n);
        find(m,i,j-1,ans,x+'L',n);
        m[i][j]=1;
       
        
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends