class Solution {
public:
    #define pii pair<int,pair<int,int>>
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    priority_queue<pii, vector<pii>, greater<pii>>vecs;
        
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                vecs.push({nums1[i]+nums2[j], {nums1[i], nums2[j]}});
            }
        }
        
        vector<vector<int>>res;
        
        while(k-- && !vecs.empty())
        {
            pii curr =vecs.top();
            vecs.pop();
            
            res.push_back({curr.second.first, curr.second.second});
        }
        
        return res;
    
    }
};