class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        int s=0,e=0,p=1;
        for(e=0;e<nums.size();e++)
        { p=p*nums[e];
         while(s<e&&p>=k)
         {
             p=p/nums[s];
             s+=1;
         }
         if(p<k)
         {
             ans+=e-s+1;
         }
            
        }
        return ans;
    }
};