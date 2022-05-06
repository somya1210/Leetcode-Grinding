class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brute force approach o(n2)
      /*  for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                    return {i,j};
            }
        }
        return {};
        */
        map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(target-nums[i])!=map.end())
            {
                return {i,map[target-nums[i]]};
            }
            else
                map[nums[i]]=i;
        }
        return {};
    }
};