class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>prev(n,-1);
        prev[0]=-1;
        dp[0]=1;
        int mx=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {   dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0&&dp[j]+1>dp[i])
                {dp[i]=dp[j]+1;
                 prev[i]=j;
                }
            }
         if(dp[mx]<dp[i])
             mx=i;
            
        }
        vector<int>ans;
        int k=mx;
        while(k!=-1)
        {
            ans.push_back(nums[k]);
            k=prev[k];
        }
        return ans;

  
    }
    // [1,2,3,4,6,24] 
    //  1 
    //  1 2
    //  
    // 1 2 4 8
    // [5,9,18,54,108,540,90,180,360,720] 
    // 5 
};