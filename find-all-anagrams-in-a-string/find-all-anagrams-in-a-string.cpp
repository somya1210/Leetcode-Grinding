class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      vector<int> ans;
      int start=0,end=0;
        vector<int>map(26,0);
        for(int i=0;i<p.length();i++)
            map[p[i]-'a']++;
        vector<int>mapwindow(26,0);
       // int mapwindow[26]={0};
        while(end<s.length())
        {
            mapwindow[s[end]-'a']++;
            if(end-start+1<p.length())
                end++;
            else
            {
                if(end-start+1==p.length())
                {
                    if(mapwindow==map)
                        ans.push_back(start);
                    mapwindow[s[start]-'a']--;
                    start++;
                    end++;
                }
            }
        }
        return ans;
    }
};