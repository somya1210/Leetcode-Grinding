class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       int start = newInterval[0];
        int end = newInterval[1];
		// removing an interval from original vector is heavier than adding to a new vector so ans;
        vector<vector<int>> ans;
        for(auto x : intervals){
		// non overlapping intervals
            if(x[1] < start or x[0] > end){
                ans.push_back(x);
                continue;
            }
            start = min(x[0], start);
            end = max(x[1], end);
        }
        vector<int> temp = {start, end};
        ans.push_back(temp);
        sort(ans.begin(), ans.end());
        return ans;   
    }
};