class Solution {
public:
    int countVowelStrings(int n) {
        // a,e i, o u 
        // a a
        // a e
        // ai 
        // a o
        // a u
        // e e 
        //e i , eo ,eu,ii,io,iu,ou
        vector<char>vowel={'a','e','i','o','u'};
        int ans=0;
        string s="";
        find(vowel,0,s,ans,n);
        return ans;
    }
    void find(vector<char>&vowel,int start,string &s,int &ans,int &n)
    {
        
        if(s.length()==n)
        {
            ans++;
            return;
        }
        for(int i=start;i<vowel.size();i++)
        {
            s.push_back(vowel[i]);
            find(vowel,i,s,ans,n);
            s.pop_back();
        }
        return;
    }
};