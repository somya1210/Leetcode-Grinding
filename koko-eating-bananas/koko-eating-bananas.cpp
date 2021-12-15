class Solution {
public:
    bool check(int k,vector<int>&piles,int h)
    {
        int need=0;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]<k)
                need+=1;
            else
            {
                if(piles[i]%k==0)
                    need+=piles[i]/k;
                else
                    need+=piles[i]/k+1;
            }
        }
        if(need<=h)
            return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
     // eat all banana , maintain k speed , h is the hour 
        // so speed can varray in between 1 - to max of the piles sizw
        int end=INT_MIN,start=1;
        for(int i=0;i<piles.size();i++)
        {
            end=max(end,piles[i]);
        }
        int ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(check(mid,piles,h))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};