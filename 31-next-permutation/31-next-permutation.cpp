class Solution {
public:
   
    void nextPermutation(vector<int>& nums) {
       // 
        int pivot=-1;
        int i=nums.size()-1;
        while(i>0&&nums[i]<=nums[i-1])
            i--;
        pivot=i-1; 
        cout<<pivot;
       if(pivot==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(i=nums.size()-1;i>pivot;i--)
        {
            if(nums[i]>nums[pivot])
            {
                int temp=nums[i];
                nums[i]=nums[pivot];
                nums[pivot]=temp;
                break;
            }
        }
        reverse(nums.begin()+pivot+1,nums.end()); 
        
    }
};