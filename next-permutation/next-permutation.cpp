class Solution {
public:
    void nextPermutation(vector<int>& nums) { int pivot=nums.size()-2;
        while(pivot>=0&&nums[pivot]>=nums[pivot+1])                                                      pivot--;
    if(pivot==-1)
    {
        
        reverse(nums.begin(),nums.end());
        return;
    }
    int i;
     for( i=nums.size()-1;i>=0;i--)
     {
         if(nums[pivot]<nums[i])
         {
             int a=nums[pivot];
             nums[pivot]=nums[i];
             nums[i]=a;
             //sort(nums.begin()+i+1,nums.end());
             break;
         }
             
     }
                                             reverse(nums.begin()+pivot+1,nums.end());
                                             
    }
};