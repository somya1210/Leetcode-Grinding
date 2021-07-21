class Solution {
public:
    bool isAnagram(string s, string t) {
     int   ar[26]={0};
        for(int i=0;i<s.length();i++)
        {
            int index=s[i]-'a';
            ar[index]++;
        }
        for(int i=0;i<t.length();i++)
        {
            int index=t[i]-'a';
            ar[index]--;
        }
        for(int i=0;i<26;i++)
        {
            if(ar[i]!=0)
                return false;
        }
        return true;
        
    }
};