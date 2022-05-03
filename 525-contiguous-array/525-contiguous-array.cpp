class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      // longest contiguous subarray that contains subarray with equal number of 0 and 1.
        // -1 0
        // -1 0 -1 0
        // 0 1 0 
        // -1 1 -1
        // 0  1  0 1  0 1 
        // -1 1 -1 1 -1 1
        // longest subarray whose sum is zero
        // 0  1 0
        // -1 1 -1
        
        /*int ans=0;
        for(int i=0;i<nums.size();i++)
        { int c0=0,c1=0;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]==0)
                    c0++;
                else
                    c1++;
                if(c0==c1)
                    ans=max(ans,j-i+1);
            }
        }
        return ans;*/
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                nums[i]=-1;
        }
        // -1 1 -1
        //  -1+1=0
        // 1 1 1 1  0  0 
        // 1 1 1 1 -1 -1
        // 4 -2 
        // 1->0
        // 2->1
        // 3->2
        //4->3
        // 3->4
        map<int,int>map;
        int j=0,ans=0,sum=0;
        map[0]=-1;
        while(j<nums.size())
        {
            sum+=nums[j];
            if(map.find(sum)!=map.end())
                {
                   int ind=map[sum];
                   ans=max(ans,j-ind); 
                }
            else
            map[sum]=j;
            j++;
        }
        return ans;
    }
};