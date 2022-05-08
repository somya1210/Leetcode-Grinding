// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
        // median middle element 
        int n;
        if((r*c)%2==0)
         n=r*c/2;
        else
         n=r*c/2+1;
        priority_queue<int,vector<int>>pq;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                pq.push(matrix[i][j]);
                if(pq.size()>n)
                pq.pop();
            }
        }
        return pq.top();
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends