// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int binarysearch(vector<int>&v)
    {
        int beg=0,end=v.size()-1;
        int ans=-1;
        while(beg<=end)
        {
            int mid=beg+(end-beg)/2;
            if(v[mid]==1)
            {
                ans=mid;
                end=mid-1;
            }
            else
             beg=mid+1;
        }
        return ans;
    }
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int ans=-1,index=-1;//,no_one=INT_MIN;
            for(int i=0;i<N;i++)
            {
                int index_zero=binarysearch(Mat[i]);
              // cout<<index_zero;
               int no_of_one;
               if(index_zero!=-1)
                no_of_one=M-index_zero;
                if(no_of_one>ans)
                {
                    ans=no_of_one;
                    index=i;
                }
              //  ans=max(ans,no_of_one);
            
            }
            return index;
        }
};

// { Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}  // } Driver Code Ends