class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
            int ans = 0;
    for (int num : nums) {
      ans |= num;
    }
    return ans * (1 << nums.size() - 1);
    }
    // 5 1 6
    // 101 001 110
    // 5^1 + 5^6
    // 1^6
    // 5^1^6
};