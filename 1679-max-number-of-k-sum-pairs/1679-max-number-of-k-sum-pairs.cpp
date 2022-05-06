class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // so total no of pairs whose sum is k
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1,ans=0;
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
            {
                i++;
                j--;
                ans++;
            }
            else
                if(nums[i]+nums[j]>k)
                    j--;
                else
                    i++;
        }
        return ans;
    }
};