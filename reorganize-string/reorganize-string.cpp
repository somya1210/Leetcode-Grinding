class Solution {
public:
    string reorganizeString(string s) {
     // aab
    //a->0
    //b->0
    // ababab
        // a->0
        //b ->0
        // c->0
        // ababca
        // a->1
        // b->0
        // aba
        // v->1
        // l->0
        // o->1
        // vlvov
        priority_queue<pair<int,char>>maxheap;

        map<char,int>map;
        for(int i=0;i<s.length();i++)
        {
            map[s[i]]+=1;
        }
        for(auto i=map.begin();i!=map.end();i++)
        {
            maxheap.push({i->second,i->first});
        }
        string ans="";
        int i=0;
        pair<int,char>prev={-1,'*'};
        while(!maxheap.empty())
        {
            pair<int,char>p=maxheap.top();
            maxheap.pop();
            ans+=p.second;
            p.first=p.first-1;
            
            if(prev.first>0)
                maxheap.push(prev);
            
            prev=p;
              
        }
        if(s.length()!=ans.length())
            return "";
        return ans;
        
    //  aba  aaab abaa
    }
};