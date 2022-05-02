class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //  1  1 1 0 0 0 1 1 1 1 0
        // k=2
        // flip at most 2 times
        int i=0,j=0,ans=0,fb=0;
        while(j<nums.size())
        {
          if(nums[j]==1)
          {
              j++;
          }
            else
            {
               if(fb<k)
               {
                   j++;
                   fb++;
               }
                else
                { 
                    while(fb==k)
                    {
                        if(nums[i]==0)
                            fb--;
                        i++;
                    }
                    
                }
            }
            ans=max(ans,j-i);
        }
        return ans;
    }
};