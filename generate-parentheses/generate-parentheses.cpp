class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string intermediate="";
       // vector<char>used;
       // int ob=0,cb=0;
        backtrack(res,intermediate,n,0,0);
        return res;
    }
    void backtrack(vector<string>&res,string &intermediate,int n,int ob,int cb)
    {
        if(intermediate.length()==2*n)
        {
            res.push_back(intermediate);
            //intermediate="";
            return;
        }
        if(ob<n)
        {intermediate.push_back('(');
        backtrack(res,intermediate,n,ob+1,cb);
        intermediate.pop_back();}
        if(cb<ob)
        {   intermediate.push_back(')');
         backtrack(res,intermediate,n,ob,cb+1);
         intermediate.pop_back();
        }
    }
};