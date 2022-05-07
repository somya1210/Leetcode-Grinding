// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    { int l_col=0,r_col=c-1;
      int t_row=0,b_row=r-1;
      int d=0;
      vector<int>ans;
      while(ans.size()<r*c)
      {
          if(d==0)
          {
             for(int i=l_col;i<=r_col;i++)
              ans.push_back(matrix[t_row][i]);
              t_row++;
              d=1;
          }
          else
          if(d==1)
          {
              for(int i=t_row;i<=b_row;i++)
              {
                  ans.push_back(matrix[i][r_col]);
              }
              d=2;
              r_col--;
          }
          else
           if(d==2)
           {
               for(int i=r_col;i>=l_col;i--)
                ans.push_back(matrix[b_row][i]);
                d=3;
                b_row--;
                
           }
           else
            if(d==3)
            {
                 for(int i=b_row;i>=t_row;i--)
                ans.push_back(matrix[i][l_col]);
                l_col++;
                d=0;
            }
          
      }
        // code here 
        return ans;

    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends