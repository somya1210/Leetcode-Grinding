class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
     string str=s.substr(0,i+1);
        if(n%str.length()==0)
        { string temp="";
            int no=n/str.length();
            while(no--)
            {
                temp+=str;
            }
         if(temp==s)
             return true;
        }
    }
        return false;
    }
};