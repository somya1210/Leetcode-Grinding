class Solution {
public:
    int countElements(vector<int>& nums) {
//     return nums.size()-2;   
        // 11 7 1 13 12 2 
        // 2 7 11 15
        // 2 2 7 11 15
        // 1 2 7 7 11 12 13 13
        // 2+1
        //8-3
        int maxno=INT_MIN,minno=INT_MAX;
        int maxfreq=0,minfreq=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxno)
                maxno=nums[i];
            if(nums[i]<minno)
                minno=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxno)
                maxfreq++;
            if(nums[i]==minno)
                minfreq++;
        }
        // 1 -(1+1)->1-2=-1
        cout<<minfreq<<""<<maxfreq<<endl;
        int find=nums.size()-minfreq-maxfreq;
        cout<<find;
        if(find<=0)
            return 0;
        return find;
        
    }
};