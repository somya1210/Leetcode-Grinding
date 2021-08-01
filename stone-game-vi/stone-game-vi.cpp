class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
     // 2 4 3
    //  1 6 7 
        // a stone can be chosen by alice if it has higher value in her respect, and she wants to chose that stone also which has more value wrt to bob , so overall optimally anyplayer will make sure that he has recieved the greater amount
        // worth of coin0 for alice (a), worth of coin0 for bob (b), so in respect of alice its worth is -b , and alice wants to max this diff 
        // intution is difficult 
        priority_queue<pair<int,pair<int,int>>>maxheap;
        for(int i=0;i<aliceValues.size();i++)
        {
            maxheap.push({aliceValues[i]+bobValues[i],{aliceValues[i],bobValues[i]}});
        }
        int chance=1,bob=0,alice=0;
        while(maxheap.size()>0)
        {
            if(chance==0)
            {
                bob+=maxheap.top().second.second; chance=1;
            }
            else
            {
                alice+=maxheap.top().second.first; chance=0;
            }
            maxheap.pop();
        }
        if(alice==bob)
            return 0;
        if(alice>bob)
            return 1;
        return -1;
    }
};