class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
// variation of mcm
        // though can be optimised further to greedy approach
        int ans=0;
        while(arr.size()>1)
        {
            int min_pr=INT_MAX;
            int min_in=-1;
            for(int i=1;i<arr.size();i++)
            {
             if(min_pr>arr[i-1]*arr[i])  
             {
                 min_pr=arr[i-1]*arr[i];
                 min_in=arr[i-1]>arr[i]?i:i-1;
             }
            }
            ans+=min_pr;
            arr.erase(arr.begin()+min_in);
        }
        return ans;
    }
};
