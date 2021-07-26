class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,vector<int>>map;
        for(int i=0;i<arr.size();i++)
        {
            map[arr[i]].push_back(i);
        }
        int c=1;
        for(auto i=map.begin();i!=map.end();i++)
        { vector<int>list=i->second;
         for(int var:i->second)
         {
             arr[var]=c;
         }
            c++;
        }
        return arr;
    }
};