class Solution {
public:
    int majorityElement(vector<int>& nums) {
      /*  sort(nums.begin(),nums.end());
        if(nums.size()==1)
            return nums[0];
        int count=1,maxcount=-1,ele,maxele=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(maxele==nums[i])
            {
                count++;
            }
            else
            {
                count=1;
                maxele=nums[i];
            }
            if(maxcount<count)
            {
                maxcount=count;
                ele=maxele;
            }
        }
        if(maxcount>(nums.size()/2))
            return ele;
        return -1;
        */
        // moore voting algo 
        int count=0,ele;
        for(int i=0;i<nums.size();i++)
        {
           if(count==0)
            {
             ele=nums[i];
                
            }
            if(ele==nums[i])
                count++;
            else
                count--;
            
        } 
        
       
            return ele;
      
    }
};