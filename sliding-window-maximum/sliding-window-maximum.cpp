class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int i=0,j=0,currmax=0;
        vector<int>ans;
        deque<int>q;
        int n=arr.size();
        for( i=0;i<k;i++)
        {
            while(!q.empty()&&arr[q.back()]<=arr[i])
                q.pop_back();
            q.push_back(i);
        }
        for(i=k;i<n;i++)
        {
            ans.push_back(arr[q.front()]);
            while(!q.empty()&&q.front()<=i-k)
                q.pop_front();
            while(!q.empty()&&arr[q.back()]<=arr[i])
                q.pop_back();
            q.push_back(i);
        }
        ans.push_back(arr[q.front()]);
        return ans;
    }
};