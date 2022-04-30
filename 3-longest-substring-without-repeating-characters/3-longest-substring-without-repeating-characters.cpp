class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int i=0,j=0;
        int ans=0;
        map<char,int>m;
        while(j<s.length())
        { if(m.find(s[j])==m.end())
        {
            m[s[j]]=1;
        }
         else
            m[s[j]]++;
            if(m.size()==(j-i+1))
            {
                ans=max(ans,j-i+1);
                
            }
            else
            { if(m.size()<(j-i+1))
                while(m.size()<(j-i+1))
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    {
                        m.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};