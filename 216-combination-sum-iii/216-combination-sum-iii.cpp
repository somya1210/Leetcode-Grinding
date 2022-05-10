class Solution {
public:
    void help(int k,int n,int begin,int sum,vector<vector<int>>&ans,vector<int>&inter)
    {
        if(inter.size()>k)
            return;
        if(inter.size()==k&&sum==0)
        {
            ans.push_back(inter);
        }
        for(int i=begin;i<=9;i++)
        {   inter.push_back(i);
            help(k,n,i+1,sum-i,ans,inter);
         inter.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
  vector<vector<int>>ans;
        vector<int>inter;
        help(k,n,1,n,ans,inter);
        return ans;
    }
};