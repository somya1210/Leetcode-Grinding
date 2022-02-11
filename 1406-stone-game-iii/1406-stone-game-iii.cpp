class Solution {
public:
    int dp[50001];
    string stoneGameIII(vector<int>& stoneValue) {
     // 1 2 3 7 (1,2,3 
    //  max(1,1+2,1+2+3)
        // 1 2 3 -9 
        // 4 -1+4
        memset(dp,-1,sizeof(dp));
     int ans=solve(stoneValue,0);  
     if(ans>0)
         return "Alice";
     if(ans<0)
         return "Bob";
        return "Tie";
        // 4 3
    } 
int solve(vector<int>&s,int i)
{
    if(i>=s.size())
        return 0;
    if(dp[i]!=-1)
        return dp[i];
    int take_one=s[i]-solve(s,i+1);
    int mx=INT_MIN;
    mx=max(take_one,mx);
    if(i+1<s.size())
        mx=max(s[i]+s[i+1]-solve(s,i+2),mx);
    if(i+2<s.size())
        mx=max(s[i]+s[i+1]+s[i+2]-solve(s,i+3),mx);

    return dp[i]=mx;
        
}
    // 1 2 3 7 
    // 3 
    // 1 2 7 
    // 7 
    // 1 2 3 -9
    // 3 
    // 1 2 -9
    // 2
    // 3+1
    // -9
    
    
};