class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     // o(n) using map
    // o(n) without space
        vector<int>ans;
     uint  axorb=nums[0];
        for(int i=1;i<nums.size();i++)
        { axorb=axorb^nums[i];
        } 
        uint rightsetbit=axorb^(axorb&(axorb-1)); //xsum ^ (xsum & (xsum -1));
        int first=0,second=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]&rightsetbit)
            first=first^nums[i];
        else
            second=second^nums[i];
    }
        ans.push_back(first);
        ans.push_back(second);
        return ans;
        
    }
};