class Solution {
public:
    static bool mycomp(vector<int>&a,vector<int>&b)
    {
        return a[0]<b[0];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
     // sort    
        int mx=1;
        sort(pairs.begin(),pairs.end(),mycomp);
        vector<int>dp(pairs.size(),1);
        for(int i=1;i<pairs.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(pairs[i][0]>pairs[j][1])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
                    
            }
            mx=max(dp[i],mx);
        }
        return mx;
    }
};