class Solution {
public:
    vector<int> find(int n,vector<int>&nums,string &s)
    {
        
        int j=0;
        vector<int>ans;
        while(n)
        {
            if(n%2)
            {
                ans.push_back(nums[j]);
                s+=nums[j];
            }
            j++;
            n=n>>1;
        }
        return ans;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size(),total=pow(2,n);
        string s="";
         map<string,int>map;
        for(int i=0;i<total;i++)
        { s="";
         vector<int>curr=find(i,nums,s);
            if(map.find(s)==map.end())
                ans.push_back(curr);
            map[s]=1;
        }
        return ans;
    }
};