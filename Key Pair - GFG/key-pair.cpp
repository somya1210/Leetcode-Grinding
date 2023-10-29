//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    // sum =16 , N=6 
	    // if there are 2 numbers such that there sum is equals to 16
	    // , 1 , 16 ( 15)
	    // 1 2 5 6 7
	    // 4
	    //   o(n^2 approach)
	    // 0(nlogn)
	    // 
	    sort(arr,arr+n);
	    // 
	    bool ans=false;
	    int i=0, j=n-1;
	    while(i<j)
	    {
	        if(i<n&&j>=0&&arr[i]+arr[j]==x)
	         return true;
	        if(i<n&&j>=0&&arr[i]+arr[j]>x)
	         {
	             j--;
	         }
	        else
	        if(i<n&&j>=0&&arr[i]+arr[j]<x)
	         i++;
	    }
	    return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends