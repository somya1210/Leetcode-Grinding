class Solution {
public:
    vector<int> find(int i,vector<int>&nums)
    { 
        vector<int>ans;
        int j=0;
        while(i)
        {
            if(i%2!=0)
                ans.push_back(nums[j]);
            j++;
            i=i>>1;
                
        }
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        // so total subsets generated will be 2^n;
        int total=pow(2,n);
     vector<vector<int>>ans;
        for(int i=0;i<total;i++)
        {
            vector<int>inter=find(i,nums);
            ans.push_back(inter);
        }
        return ans;
    }
};