// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    vector<string> genIp(string &s) {
           vector<string>ans;
        string x="";
        find(s,ans,x,0,0);
        return ans;
    }
     
    
     void find(string s,vector<string>&ans, string temp,int i,int dots)
    {
        if(dots==3)
        {
            if(isvalid(s.substr(i)))
            {
                ans.push_back(temp+s.substr(i));
                return;
            }
            return;
        }
        for(int j=i;j<s.length();j++)
        {
            if(isvalid(s.substr(i,j-i+1)))
            {
                temp.push_back(s[j]);
                temp.push_back('.');
                find(s,ans,temp,j+1,dots+1);
                temp.pop_back();
            }
        }
        
    }
    bool isvalid(string s)
    { 
        if(s.length()>3||s.length()<1)
            return false;
        if(s.length()>1&&s[0]=='0')
            return false;
        if(s.length()&&stoi(s)>255)
            return false;
        return true;
    }

};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}  // } Driver Code Ends