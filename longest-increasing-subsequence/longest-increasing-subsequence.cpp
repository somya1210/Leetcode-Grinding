class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
     
        int lis[nums.size()];
        lis[0]=1;
        
        for(int i=1;i<nums.size();i++)
        {lis[i]=1;
            for(int  j=i-1;j>=0;j--)
            {
                if(nums[i]>nums[j])
                {
                    lis[i]=max(lis[i],lis[j]+1);
                }
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=max(ans,lis[i]);
        }
        return ans;
    }
};