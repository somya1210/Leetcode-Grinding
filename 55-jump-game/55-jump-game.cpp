class Solution {
public:
    bool canJump(vector<int>& nums) {
       int goal=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            int reach=i+nums[i];
            if(reach>=goal)
            {
                goal=i;
            }
        }
        if(goal==0)
            return true;
        return false;
    }
};