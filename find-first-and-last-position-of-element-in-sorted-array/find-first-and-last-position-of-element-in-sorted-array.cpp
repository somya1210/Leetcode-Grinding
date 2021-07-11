class Solution {
public:
    int binarysearch_first(vector<int>&nums,int target)
    {
        int beg=0,end=nums.size()-1,ans=-1;
        while(beg<=end)
        {
            int mid=beg+(end-beg)/2;
            if(nums[mid]==target)
            {
                ans=mid; // 1 8 8 8 8 9 t=8 
                end=mid-1;
            }
            else
                if(nums[mid]>target)
                {
                    end=mid-1;
                }
               else
               {
                   beg=mid+1;
               }
        }
        return ans;
    }
       int binarysearch_second(vector<int>&nums,int target)
    {
        int beg=0,end=nums.size()-1,ans=-1;
        while(beg<=end)
        {
            int mid=beg+(end-beg)/2;
            if(nums[mid]==target)
            {
                ans=mid; // 1 8 8 8 8 9 t=8 
                beg=mid+1;
            }
            else
                if(nums[mid]>target)
                {
                    end=mid-1;
                }
               else
               {
                   beg=mid+1;
               }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return {-1,-1};
        vector<int>ans(2);
    
        int first=-1;

        first=binarysearch_first(nums,target); cout<<first;
        int second=-1;
        second=binarysearch_second(nums,target);
        ans[0]=first;
        ans[1]=second;
        return ans;
    }
    // first index  // last index also 
    // 5 8 8 8 8 10  t=8 
   //  0 1 2 3 4 5 
};