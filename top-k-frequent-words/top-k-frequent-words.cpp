class Solution {
public:
   
     struct Comp {
        bool operator()(const pair<int, string>& lhs, const pair<int, string>& rhs) const {
            if (lhs.first != rhs.first)
                return lhs.first < rhs.first;
            return lhs.second > rhs.second;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
     map<string,int>map;
        for(int i=0;i<words.size();i++)
        {
            map[words[i]]+=1;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,Comp>pq;
        for(auto i=map.begin();i!=map.end();i++)
        {
            pq.push({i->second,i->first});
            
        }
        int i=0;
        vector<string>ans;
        while(i<k)
        {
            string s=pq.top().second;
            ans.push_back(s);
            pq.pop(); i++;
        }
        //sort(ans.begin(),ans.end());
        return ans;
    }
};