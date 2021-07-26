class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
      // 20 -> 40  
        
        // 30 60-30=x 60+30 60+60 60+2*30  
        // 30 120 
        int ar[60]={0};
        for(int i=0;i<time.size();i++)
            ar[time[i]%60]+=1;
        int ans=0;
        for(int i=1;i<=29;i++)
        {
            ans+=ar[i]*ar[60-i];
        }
        int a=ar[0];
        ans+=a*(a-1)/2;
        a=ar[30];
        ans+=a*(a-1)/2;
        return ans;
    }
};