class Solution {
public:
int kadane(vector<int>&ans)
{long long mod = 1000000007;
    int res=INT_MIN;
        int max_ending_here=0;
        for(int i=0;i<ans.size();i++)
        {
            max_ending_here+=ans[i];
            if(max_ending_here<0)
            {
                max_ending_here=0;
            }
            if(max_ending_here>res)
                res=max_ending_here;
            max_ending_here=max_ending_here%mod;
            res%=mod;
        }
    return res;
    
}
    int kConcatenationMaxSum(vector<int>& arr, int k) {
       // 1 2 1 2 1 2 
        //  
       // o(n*k)
        
        vector<int>ans;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                ans.push_back(arr[j]);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
            
           
        int sum=0;
        int res=0;
        for(int i=0;i<arr.size();i++)
            sum+=arr[i];
        if(k==1)
            return kadane(arr);
        else
            res=kadane(ans);
        // max subarray sum ->kadane algo
        if(sum<0)
            return res;
        long long mod = 1000000007;
        int s=(res%mod+((k-2)%mod*sum%mod)%mod)%mod;
        
        
        return s;
    }
};