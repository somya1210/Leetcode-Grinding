class Solution {
public:
    vector<vector<string>> partition(string s) {
     vector<vector<string>>res;
        vector<string>inter;
        // aab
        // a 
        // a
        //
        backtrack(s,inter,res);
        return res;
    }
    void backtrack(string s,vector<string>&inter,vector<vector<string>>&res)
    {
        if(s.length()==0)
        {
            res.push_back(inter); return;
        }
        for(int i=0;i<s.length();i++)
        {
            string leftcut=s.substr(0,i+1);
           // string rightcut=s.substr(i+1,s.length()-1);
            if(ispalindrome(leftcut))
            {   inter.push_back(leftcut);
                backtrack(s.substr(i+1,s.length()),inter,res);
                inter.pop_back();
            }
        }
    }
    bool ispalindrome(string s)
    { int n=s.length();
       int left=0,right=n-1;
     while(left<=right)
     {
         if(s[left]!=s[right])
             return false;
         left++; right--;
     }
        return true;
    }
};