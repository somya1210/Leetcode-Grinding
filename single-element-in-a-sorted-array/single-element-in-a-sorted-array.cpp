class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // amazing question so this problem can be solved in o(n)
         // using bitwise xor operation , but to do it in o(logn) which means apply binary search 
         int beg=0,end=nums.size()-1;
        int n=nums.size();
         if(end==0)
            return nums[0];
        if(nums[0]!=nums[1])
            return nums[0];
        if(nums[n-1]!=nums[n-2])
            return nums[n-1];
       
        while(beg<=end)
        {
            int mid=beg+(end-beg)/2;
             if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])
          return nums[mid];
            if(nums[mid]==nums[mid-1]&&mid%2!=0||nums[mid]==nums[mid+1]&&mid%2==0)
                beg=mid+1;
            else
                end=mid-1;
        }
        return -1;
    }
};