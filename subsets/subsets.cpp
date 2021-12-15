class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
                vector<vector<int>>result;
        vector<int>inter;
        calculate(nums,result,inter,0);
        return result;
    }
    void calculate(vector<int>&nums,vector<vector<int>>&result,vector<int>&inter,int begin)
    {
        result.push_back(inter);
        for(int i=begin;i<nums.size();i++)
        {
            inter.push_back(nums[i]);
            calculate(nums,result,inter,i+1);
            inter.pop_back();
        }
    }
};