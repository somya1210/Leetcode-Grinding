// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int i=0,j=0,ans=-1;
    map<char,int>map;
    while(j<s.length())
    {
        if(map.find(s[j])==map.end())
        {
            map[s[j]]=1;
        }
        else
        {
            map[s[j]]+=1;
        }
        if(map.size()==k)
        {
            ans=max(ans,j-i+1);
        }
        else
         if(map.size()>k)
         {
             while(map.size()>k)
             {
                 map[s[i]]--;
                 if(map[s[i]]==0)
                 {
                     map.erase(s[i]);
                 }
                 i++;
             }
         }
         j++;
    }
    return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends