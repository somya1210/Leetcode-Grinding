class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
     priority_queue<pair<int,pair<int,int>>>max_heap;
     for(int i=0;i<nums1.size();i++)
     {
         for(int j=0;j<nums2.size();j++)
         {
             max_heap.push(make_pair(nums1[i]+nums2[j],make_pair(nums1[i],nums2[j])));
             if(max_heap.size()>k)
                 max_heap.pop();
             
         }
     }
      int si=max_heap.size();  
        vector<vector<int>>ans(si,vector<int>(2));
        int n=si-1;
        while(max_heap.size())
        {   int a=max_heap.top().second.first;
            int b=max_heap.top().second.second;
         ans[n][0]=a;
         ans[n][1]=b;
         n--;
            max_heap.pop();
        }
        return ans;
    }
};