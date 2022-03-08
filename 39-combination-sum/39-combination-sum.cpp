class Solution {
public:
    void help(vector<int>& candidates, int target, vector<vector<int>>&ans, vector<int>&inter,int start)
    {
        if(target<0)
            return;
        if(target==0)
        {
            ans.push_back(inter);
            return;
        }
        for(int i=start;i<candidates.size();i++)
        {
            inter.push_back(candidates[i]);
            help(candidates,target-candidates[i],ans,inter,i);
            inter.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>>ans;
        vector<int>inter;
        help(candidates,target,ans,inter,0);
        return ans;
    }
};