class Solution {
public:

    string frequencySort(string s) {
     map<char,int>map;
        for(int i=0;i<s.length();i++)
        {
            map[s[i]]+=1;
        }
        priority_queue<pair<int,char>>maxheap;
        for(auto i=map.begin();i!=map.end();i++)
        {
            maxheap.push({i->second,i->first});
        }
        string ans="";
        while(maxheap.size()>0)
        {
            char ch=maxheap.top().second;
            int n=maxheap.top().first;
            while(n--)
                ans+=ch;
            maxheap.pop();
        }
        return ans;
    }
};