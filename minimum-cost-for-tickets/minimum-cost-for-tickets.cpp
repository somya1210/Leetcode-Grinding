class Solution {
public:
   /* int find(vector<int>& days, vector<int>& costs,int i,vector<int>&dp)
    {
        if(i>=days.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int op1=find(days,costs,i+1,dp)+costs[0];
        int k=i;
        while(k<days.size())
        {
            if(days[i]+7>days[k])
                break;
            k++;
        }
        int op2=find(days,costs,k,dp)+costs[1];
        while(k<days.size())
        {
            if(days[i]+30>days[k])
                break;
            k++;
        }
        int op3=find(days,costs,k,dp)+costs[2];
        return dp[i]=min(op1,min(op2,op3));
    }*/
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
     int minCost=0;
        vector<int>dp(366,0);
        dp[0]=0;
        unordered_set<int>set(days.begin(),days.end());
        for(int i=1;i<=365;i++)
        {
            dp[i]=dp[i-1];
            if(set.find(i)!=set.end())
            {
                dp[i]=min(dp[i-1]+costs[0],min(dp[max(0,i-7)]+costs[1],dp[max(0,i-30)]+costs[2]));
            }
        }
        //minCost=find(days,costs,0,dp);
        //return minCost;
    return dp[365];
    }
};