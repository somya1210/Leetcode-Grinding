class Solution {
public:
    int find(vector<int>& arr, int mid,int target)
    {int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>mid)
                sum+=mid;
            else
                sum+=arr[i];
        }
     return abs(sum-target);
    }
    int findBestValue(vector<int>& arr, int target) {
        int start=0,end=target,diff=INT_MAX,ans=0;
        
        while(start<end)
        {
            int mid=(start+end)/2; 
        
            if(find(arr,mid,target)<=find(arr,mid+1,target))
                end=mid;
            else
                start=mid+1;
          
            
        } 
        return start;
             
        
    
    }
    // 4 9 3 sum=16  4 4 3 ->11 
    // target=10 min=1 max=10^5 
    // 4 5 3 12 
    // 4 4 3 11 -> 3
};