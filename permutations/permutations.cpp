class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()==0)
            return vector<vector<int>>();
        vector<int>intermediate;
         vector<vector<int>>res;
        vector<bool>used(nums.size(),false);
        for(int i=0;i<nums.size();i++)
            used[i]=false; 
        backtrack(nums,res,intermediate,used); 
      //  permutedfs(nums,res,0);
        return res;
        
    }
    void backtrack(vector<int>&nums, vector<vector<int>>&res,vector<int>&intermediate,vector<bool>&used)
    {
        if(intermediate.size()==nums.size())
        {
            res.push_back(intermediate);
        return;
        }
        
         for(int i=0;i<nums.size();i++)
        { 
             if(used[i]!=true)
             { intermediate.push_back(nums[i]);
               used[i]=true;
            backtrack(nums,res,intermediate,used);
             intermediate.pop_back();
         used[i]=false;
        }
    }}
    /*void permutedfs(vector<int>&nums,vector<vector<int>>&res,int pos)
    {
        if(pos==nums.size())
        {
            res.push_back(nums);
            return ;
        }
        for(int i=pos;i<nums.size();i++)
        {
            swap(nums[i],nums[pos]);
            permutedfs(nums,res,pos+1);
            swap(nums[i],nums[pos]);
        }
    }
    void swap(int &a,int &b)
    {
        int t=a;
        a=b;
        b=t;
    } */

};