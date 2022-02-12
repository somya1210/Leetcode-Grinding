class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
   string ans="";
        string s=strs[0];
        int min_len=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            int len=strs[i].length();
            min_len=min(len,min_len);
        }
        bool flag=true;
        for(int i=0;i<min_len;i++)
        { bool t=false;
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=strs[j-1][i])
                    t=true;
            }
         if(t)
             return ans;
         else
             ans+=strs[0][i];
            
        }
        return ans;
    }
};