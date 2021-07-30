class Solution {
public:
    int nthUglyNumber(int n) {
      //   table method 
        vector<int>dp(n);
        dp[0]=1;
        int t2=0,t3=0,t5=0;
        for(int i=1;i<n;i++)
        {   int m2=dp[t2]*2;
            int m3=dp[t3]*3;
            int m5=dp[t5]*5;
            dp[i]=min(m2,min(m3,m5));
            if(dp[i]%m2==0)
            { t2++;
                
            }
            if(dp[i]%m3==0)
            {
                t3++;
            }
            if(dp[i]%m5==0)
                t5++;
        }
        return dp[n-1];
    }
};