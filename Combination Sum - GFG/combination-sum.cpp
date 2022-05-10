// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        sort(A.begin(),A.end());
        vector<vector<int>>ans;
        vector<int>x;
        find(A,ans,x,B,0);
        return ans;
        
    }
    void find(vector<int>&A,vector<vector<int>>&ans,vector<int>&x,int sum,int begin)
    {
        if(sum<0)
         return;
        if(sum==0)
        {
            ans.push_back(x);
            return;
        }
        for(int i=begin;i<A.size();i++)
        {   if(i==begin||A[i]!=A[i-1])
             {
            x.push_back(A[i]);
            find(A,ans,x,sum-A[i],i);
            x.pop_back();
        }
        }
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends