class Solution {
public:
    int maxCoins(vector<int>& piles) {
     sort(piles.begin(),piles.end());
        int n=piles.size()/3;
        int j=piles.size()-2;
        int ans=0;
        for(int i=0;i<n;i++)
        {  ans+=piles[j];
            j=j-2;
         cout<<ans;
        }
        return ans;
    }
};