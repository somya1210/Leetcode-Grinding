class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // 1 79 80 1 1 1 200 1 
        // 1
        int ans=0;
        int leftsum[100002]={0};
        int rightsum[100002]={0};
        
        for(int i=1;i<cardPoints.size();i++)
        {
            leftsum[i]=leftsum[i-1]+cardPoints[i-1];
        }
        int n=cardPoints.size();
        for(int i=1;i<=k;i++)
        {
            rightsum[i]=rightsum[i-1]+cardPoints[n-i];
        }
        for(int i=0;i<=k;i++)
        {
            ans=max(ans,leftsum[i]+rightsum[k-i]);
        }
        return ans;
        
        
    }
};