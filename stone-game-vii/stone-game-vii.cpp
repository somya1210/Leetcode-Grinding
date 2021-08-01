class Solution {
public:
     int dp[1001][1001];
    int find(vector<int>&stones,int i,int j,int sum)
    {if(i>j)
        return 0;
     if(i==j)
         return 0;
     if(dp[i][j]!=-1)
         return dp[i][j];

    
     
      return dp[i][j]=max(sum-stones[i]-find(stones,i+1,j,sum-stones[i]),sum-stones[j]-find(stones,i,j-1,sum-stones[j]));   
    
        
    }
    int stoneGameVII(vector<int>& stones) {
        int sum=0;

        memset(dp,-1,sizeof(dp));
        int n=stones.size();
         for(int k=0;k<=n-1;k++)
         sum+=stones[k];
        int ans=find(stones,0,stones.size()-1,sum);
        
        return ans;
    }
};