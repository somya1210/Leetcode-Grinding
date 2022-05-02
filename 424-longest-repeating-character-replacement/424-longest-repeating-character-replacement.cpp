class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        int ans=0,maxfreq=0;
        map<char,int>map;
        while(j<s.length())
        {
            if(map.find(s[j])==map.end())
            {
                map[s[j]]=1;
            }
            else
                map[s[j]]+=1;
            if(maxfreq<map[s[j]])
            {
                maxfreq=map[s[j]];
            }
            if(j-i+1-maxfreq<=k)
            {
                ans=max(ans,j-i+1);
            }
            else
            {
                if(j-i+1-maxfreq>k)
                {
                    while(j-i+1-maxfreq>k)
                    {
                        map[s[i]]--;
                        i++;
                        for(auto i=map.begin();i!=map.end();i++)
                        {
                            maxfreq=max(maxfreq,i->second);
                        }
                    }
                }
            }
            j++;
            // like k character replacement only revise it properly
        }
        return ans;
    }
};