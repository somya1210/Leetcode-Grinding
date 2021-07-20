class Solution {
public:
    bool check(int max,vector<int>& nums, int maxOperations)
    {
        int need=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%max!=0)
                need+=nums[i]/max;
            else
                need+=nums[i]/max-1;
        }
        if(need>maxOperations)
            return false;
        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
    // min possible penalty -> max value in the final array after apply oper maxoperation number of times
     // so in this problem we have to search for the least max value within the array that can be made by dividing the array element with maxOperations
        // 
        int start=1,end=INT_MAX,ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            // nums array must contain all the elements less than or equal to mid
            if(check(mid,nums,maxOperations))
            {
                ans=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return ans;
    }
};