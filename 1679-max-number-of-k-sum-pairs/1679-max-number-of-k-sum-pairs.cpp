class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // so total no of pairs whose sum is k
      /*  sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1,ans=0;
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
            {
                i++;
                j--;
                ans++;
            }
            else
                if(nums[i]+nums[j]>k)
                    j--;
                else
                    i++;
        }
        return ans;
        */
        // 
        map<int,int>map;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {//map[nums[i]]+=1;
           if(map.find(k-nums[i])!=map.end()&&map[k-nums[i]]!=0)
           {
               if(map[k-nums[i]]!=0)
               {  ans++;
                 map[k-nums[i]]-=1;
               }
               
           }
            else
            {
                map[nums[i]]+=1;
            }
        
               
        }
        return ans;
    }
};