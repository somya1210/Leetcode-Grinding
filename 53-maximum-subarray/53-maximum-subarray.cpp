class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // -2 1 -3 4 -1 2 1 -5 4
        // -5 
        int sum=nums[0],curr=0;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            
            if(curr>sum)
                sum=curr;
            if(curr<0)
                curr=0;
            
        }
        return sum;
    }
};