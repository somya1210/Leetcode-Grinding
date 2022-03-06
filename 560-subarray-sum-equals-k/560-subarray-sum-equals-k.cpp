class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>map;
        int currsum=0,ans=0;
        for(int i=0;i<nums.size();i++)
        { currsum+=nums[i];
         if(currsum==k)
             ans++;
        if(map.find(currsum-k)!=map.end())
                ans+=map[currsum-k];
            map[currsum]+=1;
        }
        return ans;
    }
};