class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     int left=0,right=numbers.size()-1;
        vector<int>ans(2,0);
        while(left<right)
        {
            if(numbers[left]+numbers[right]==target)
            {
                ans[0]=left+1;
                ans[1]=right+1;
                return ans;
            }
            else
            {
                if(numbers[left]+numbers[right]>target)
                {
                    right--;
                }
                else
                    left++;
            }
        }
        return ans;
        
    }
};