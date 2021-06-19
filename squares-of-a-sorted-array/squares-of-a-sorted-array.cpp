class Solution {
public:
   vector<int> sortedSquares(vector<int>& nums) {
     int least_neg=-1,least_pos=0,i=0;
        while(i<nums.size()&&nums[i]<0)
        {least_neg++;
        i++;
        } cout<<least_neg;
        
        least_pos=least_neg+1;
        //cout<<least_pos;
        if(least_neg==nums.size()-1)
            reverse(nums.begin(),nums.end());
        else
        { vector<int>n(nums.size());
         int j=0;
       //  for(int i=0;i<nums.size();i++)
         //   cout<<n[i];
         while(j<nums.size()&&least_pos<nums.size()&&least_neg>=0)
         {
             if(abs(nums[least_pos])<abs(nums[least_neg]))
             {
                 n[j]=nums[least_pos];
                 j++;
                 least_pos++;
             }
             else
             {
                 n[j]=nums[least_neg];
                 j++;
                 least_neg--;
             }
         }
         while(least_pos<nums.size())
         {
             n[j]=nums[least_pos];
             least_pos++;j++;
         }
         while(least_neg>=0)
         {
             n[j]=nums[least_neg];
             least_neg--; j++;
         }
         for(int i=0;i<nums.size();i++)
            n[i]*=n[i];
         return n;
            
        }
        
        for(int i=0;i<nums.size();i++)
            nums[i]=nums[i]*nums[i];
        return nums;
    }
};