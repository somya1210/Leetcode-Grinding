class Solution {
public:
    int getMaximumGenerated(int n) {
       //n=2
        // 0 1 
        // n=3
        // 0 1 1
        
        // n=4
        // 0 1 1 2
        // n=5
        // 0 1 1 2 1 3 2 3
        int k;
        if(n%2==0)
            k=(n-1)/2+1;
        else
            k=(n-1)/2;
        cout<<k;
        vector<int>nums(n+2,0);
        nums[0]=0;
        nums[1]=1;
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 1;
        // i=1
        // nums[2]=nums[1]
        // nums[3]=nums[1]+nums[2]
        // nums[2*2]=nums[4]=nums[2]
        // nums[5]=nums[2]+nums[3]
        // nums[2*3]=nums[3]
        // nums[2*3+1]
        // n=6 
        // k=3
        // nums[2]=1
        // nums[]
        for(int i=1;i<=k;i++)
        {
            nums[2*i]=nums[i];
        //    if(n%2!=0&&i==k)
             nums[2*i+1]=nums[i]+nums[i+1];
        }
        int ans=0;
        for(int i=0;i<=n;i++)
            
        {
            ans=max(ans,nums[i]);
        }
        return ans;
    }
};