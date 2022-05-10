class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
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