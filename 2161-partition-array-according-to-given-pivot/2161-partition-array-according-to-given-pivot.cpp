class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
  vector<int>small;
        vector<int>large;
        int countequal=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>pivot)
            {
                large.push_back(nums[i]);
            }
            else
            if(nums[i]<pivot)
            {
                small.push_back(nums[i]);
            }
            else
            if(nums[i]==pivot)
            {
                countequal++;
            }
        }
        vector<int>ans;
        int i=0;
        while(i<small.size())
        {
            ans.push_back(small[i]);
            i++;
        }
        i=0;
        while(i<countequal)
        {
            ans.push_back(pivot);
            i++;
        }
        i=0;
        while(i<large.size())
        {
            ans.push_back(large[i]);
            i++;
        }
        return ans;
    }
};