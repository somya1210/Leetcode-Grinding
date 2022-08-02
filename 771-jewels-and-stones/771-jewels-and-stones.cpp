class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>map;
        for(int i=0;i<stones.size();i++)
        {
            map[stones[i]]+=1;
        }
        int ans=0;
        for(int i=0;i<jewels.size();i++)
        {
            if(map.find(jewels[i])!=map.end())
            {
                ans+=map[jewels[i]];
            }
        }
      return ans;
        
    }
};