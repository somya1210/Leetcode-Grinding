class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans=values[0]+values[1]-1;
        int prev_max=values[0];
        for(int j=1;j<values.size();j++)
        {
            ans=max(ans,prev_max+values[j]-j);
            prev_max=max(prev_max,values[j]+j);
        }
        return ans;
    }
};