class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="",s2="";
        for(string x:word1)
        {
            s1+=x;
        }
        for(string x:word2)
        {
            s2+=x;
        }
        if(s1==s2)
            return true;
        return false;
    }
};