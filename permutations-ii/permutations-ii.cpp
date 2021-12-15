class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if(nums.size()==0)
            return vector<vector<int>>();
        sort(nums.begin(),nums.end());
        vector<int>used(nums.size(),0);
        vector<int>intermediate;
        vector<vector<int>>res;
        backtrack(nums,res,used,intermediate);
        return res;
    }
    void backtrack(vector<int>&nums,vector<vector<int>>&res,vector<int>&used,vector<int>&intermediate)
    { if(intermediate.size()==nums.size())
    {
        res.push_back(intermediate);
       return;
    }  
     for(int i=0;i<nums.size();i++)
     {
         //if(used[i]==1)
            // continue;
         
             if(used[i] || i > 0 && nums[i] == nums[i-1] && !used[i - 1]) continue;
             intermediate.push_back(nums[i]);
             used[i]=1;
             backtrack(nums,res,used,intermediate);
             intermediate.pop_back();
             used[i]=0;
         
     }//return;
    }
};