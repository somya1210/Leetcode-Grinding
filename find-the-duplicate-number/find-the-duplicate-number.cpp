class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // given that each number is from 1 to n 
        
        for(int i=0;i<nums.size();i++)
        {
           int index=nums[i]<0?-nums[i]:nums[i];
            if(nums[index]<0)
                return index;
            nums[index]=nums[index]*-1;
        }
        return 0;
    }
};