class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int beg=0,end=nums.size()-1;
        int ans=0;
        while(beg<=end)
        {
            int mid=beg+(end-beg)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else
                if(nums[mid]>target)
                {
                    end=mid-1;
                }
                else
                {
                    ans=mid+1;
                    beg=mid+1;
                }
        }
        return ans;
    }
    // 1 3 5 6   t=7 
   //  beg=0 end=3 mid=1 3<7 ans=2 beg=1  end=3 mid=2 ans=3  
};