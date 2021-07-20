class Solution {
public:
    bool check(int k,vector<int>& weights, int days)
    {
     // k is max weight can be sent on day
        int day_require=1;
        int cur=0;
        for(int i=0;i<weights.size();i++)
        { cur+=weights[i];
        if(cur>k)
        { day_require++;
           cur=weights[i];
        }
        
            
        }
        if(day_require<=days)
            return true;
        return false;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
     // 1 2 3 4 5 6 7 8 9 10 days=5
// 3 2 2 4 1 4 days=3
        // least weight ->binary search
        int start=1,end=0;
        for(int i=0;i<weights.size();i++)
        {
            start=max(weights[i],start);
            end+=weights[i];
        }
        int ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(check(mid,weights,days))
            {
                ans=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return ans;
    }
};