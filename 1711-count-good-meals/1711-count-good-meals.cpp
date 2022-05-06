class Solution {
public:
    int countPairs(vector<int>& d) {
        // bf check all possible in o(n2) time
        // now tru two sum approach
        long long N=1e9+7;
        int ans=0;
        map<int,int>map;
        for(int i=0;i<d.size();i++)
        {
            int power=1;
            for(int j=0;j<22;j++)
            {
                if(map.find(power-d[i])!=map.end())
                {
                    ans=(ans%N+map[power-d[i]]%N)%N;
                }
                power=power*2;
            }
            map[d[i]]+=1;
        }
        
     return ans;   
    }
};