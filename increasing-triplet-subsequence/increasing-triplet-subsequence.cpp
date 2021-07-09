class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // n2 
        // increasing subsequence of length 3
         vector<int> dp;
        for (auto n : nums)
        {
            auto iter = lower_bound(begin(dp), end(dp), n);
            if (iter == end(dp))
            {
                dp.push_back(n);
                if (dp.size() == 3)
                    return true;
                continue;
            }
            if (*iter > n)
                *iter = n;
        }
        return false;
    }
};