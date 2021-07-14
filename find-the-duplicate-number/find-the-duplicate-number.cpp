class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // given that each number is from 1 to n 
        
        /*for(int i=0;i<nums.size();i++)
        {
           int index=nums[i]<0?-nums[i]:nums[i];
            if(nums[index]<0)
                return index;
            nums[index]=nums[index]*-1;
        }
        return 0;
        */
            if(nums.size()<2)
            return -1;
        int fast=nums[0],slow=nums[0];
        do
        {fast=nums[nums[fast]];
         slow=nums[slow];
            
        }while(slow!=fast);
            fast=nums[0];
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
        
    }
    // so we have to find the reapeated number 
    // above algo is for muatable array but if we are asked that we cannot change the array in that case we have to consider tortoise and hare algo 
    // for ll cycle detection
    
};
