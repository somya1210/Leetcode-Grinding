class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low,high,mid;
        low=0,mid=0;
        high=nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            switch(nums[mid])
            {
                case 0: swap(nums[low],nums[mid]);
                    low++;
                    mid++;
                    break;
                case 1: mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high]);
                    high--;
            }
        }
    }
    void swap(int &a,int &b)
    {
        int t=a;
        a=b;
        b=t;
    }
};