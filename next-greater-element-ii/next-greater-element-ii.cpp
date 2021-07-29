class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // 4 7 2 5 3
        // 7 -1 5 7 4
        // 4 3 2
        // -1 4 4
        // 1 2 3 
        // 2 3 -1 
        vector<int>temp;
        for(int i=0;i<nums.size();i++)
            temp.push_back(nums[i]);
        
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i=0;i<2*n;i++)
            cout<<temp[i];
        for(int i=0;i<n;i++)
        {
            int ele=temp[i],t=0;
            for(int j=i+1;j<2*n;j++)
            {
                if(temp[j]>ele)
                {   ans.push_back(temp[j]); t=1;
                 break;
                }
            }
            if(t==0)
                ans.push_back(-1);
        }
        return ans;
    }
};