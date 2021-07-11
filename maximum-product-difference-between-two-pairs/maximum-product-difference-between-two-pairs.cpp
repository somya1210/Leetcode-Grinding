class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int x=INT_MIN,y=INT_MIN,a=INT_MAX,b=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]>x||nums[i]>y)
           {   
               if(nums[i]>x)
               {
                   y=x;
                   x=nums[i];
               }
               else
                   if(nums[i]>y)
                   {
                       y=nums[i];
                   }
           }
            if(nums[i]<a||nums[i]<b)
            {
                if(nums[i]<a)
                {
                    b=a;
                    a=nums[i];
                }
                else
                {
                    b=nums[i];
                }
            }
        }

        
        int ans=0; cout<<x<<y;
       ans=x*y-a*b;
        return ans;
    }
// x=4 y=2 
// [4,2,5,9,7,4,8]  9 8 
    // 5 6 2 7 4 
    // max diff 
    // x*y-a*b
    // x y ->are greatest
    // a b ->are least
};