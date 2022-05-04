// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
     map<int,pair<int,int>>map;
     for(int i=0;i<n;i++)
     {
         if(map.find(a[i])==map.end())
         {
             map[a[i]].first=1;
              map[a[i]].second=i;
         }
         else
         { if(map[a[i]].first<k)
             {map[a[i]].first+=1;
             map[a[i]].second=i;
             }
         }
        
         
     }
     int index=n,ans=-1;
     for(auto i=map.begin();i!=map.end();i++)
     {
         if(i->second.first==k)
         {
             if(i->second.second<index)
             {
                 index=i->second.second;
                 ans=i->first;
             }
         }
     }
     return ans;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}  // } Driver Code Ends