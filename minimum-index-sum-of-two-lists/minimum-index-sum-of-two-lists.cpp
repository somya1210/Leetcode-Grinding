class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,pair<int,bool>>mp;
        for(int i=0;i<list1.size();i++)
        { mp[list1[i]].first=i;
         mp[list1[i]].second=false;
        }
         vector<string>ans;
        int mn=INT_MAX;
        for(int i=0;i<list2.size();i++)
        {   if(mp.find(list2[i])!=mp.end())
            {
                mp[list2[i]].first+=i;
                if(mn>mp[list2[i]].first)
                    mn=mp[list2[i]].first;
            mp[list2[i]].second=true;
            }
        }
              
        for(auto i=mp.begin();i!=mp.end();i++)
            if(i->second.first==mn&&i->second.second)
                ans.push_back(i->first);
        return ans;
    }
};