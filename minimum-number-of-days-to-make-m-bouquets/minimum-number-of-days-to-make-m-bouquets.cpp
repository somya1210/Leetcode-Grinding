class Solution {
public:
    bool check(int days,vector<int>& bloomDay, int m, int k)
    { // 1 10 3 10 2 m=3 k=1
        // mid=5 days m bouquet bana paenge using k series m
         
// 7 7 7 7 12 7 7 
// mid=9 
// size=1 , 2 3 c=1 size=1 size=0 
        int size=0,count=0;
        for (int i = 0; i < bloomDay.size(); i++) {
            size = (bloomDay[i] <= days) ? size+1 : 0;
            if (size == k) size = 0, count++;
            if (count == m)
                return true;
        }
        
        return false;
      
      
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
       // 7 7 7 7 12 7 7 
        // m=2 k=3 
        // [x x x x _ x x]
        if(m*k>bloomDay.size())
            return -1;
        // 
        // min=min(bloomDay) ,max=max(bloomDay)
        int start=INT_MAX,end=INT_MIN,ans=-1;
        for(int i=0;i<bloomDay.size();i++)
        {
            start=min(start,bloomDay[i]);
            end=max(end,bloomDay[i]);
        }
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(check(mid,bloomDay,m,k))
            {
                ans=mid; end=mid-1;
                
            }
            else
                start=mid+1;
        }
        return ans;
    }
};