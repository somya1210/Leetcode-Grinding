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
    
        // This Problem says to find the numbers whose frequency is 1
        // so for this we first tried to find xor of all the numbers , so we finally left with the non repeating numbers , after this we have to find the individual numbers from the given xor
        // for this we find the first set bit from the right 
        // rightbit= _xor^(_xor&(_xor-1))
        // rightmost set bit means that the two numbers have different bit at that bit number
        // after this we traverse the array once again and try to grp the elements on the basis of that bit is set at that bit number or not 
        // so finally we have the two numbers in diff grps
        
    }
};
