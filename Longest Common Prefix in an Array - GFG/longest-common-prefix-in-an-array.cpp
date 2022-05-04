// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr,arr+N);
        int mn=INT_MAX;
        for(int i=0;i<N;i++)
        { 
            string x=arr[i];
            int s=x.length();
            mn=min(mn,s);
        }
        string ans="-1";
        for(int j=0;j<mn;j++)
        { int ch1=arr[0][j];
         bool tr=true;
            for(int i=1;i<N;i++)
            {
                if(ch1!=arr[i][j])
                 tr=false;
                else
                 tr=true;
            }
            if(tr)
             ans+=ch1;
            else
             break;
        }
        if(ans=="-1")
         return "-1";
        ans=ans.substr(2);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends