class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
    int n=a.size();
        vector<int>dp(n,0);
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(dp[i],ans);
        return ans;
        // [1,3,6,7,9,4,10,5,6]
        //  1 2 3 4 5 3 6  4 5
        // 10,9,2,5,3,7,101,18
    }
};