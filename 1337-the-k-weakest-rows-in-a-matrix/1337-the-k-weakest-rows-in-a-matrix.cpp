class Solution {
public:
   static bool myfun(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first<b.first)
            return true;
        if(a.first==b.first)
            return a.second>b.second;
        return true;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // 
        //[2 4 1 2 5]
        // [2 0 3]
        priority_queue<pair<int,int>,vector<pair<int,int>>>maxheap;
        for(int i=0;i<mat.size();i++)
        { int no=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                    no++; 
            }
         maxheap.push(make_pair(no,i));
         if(maxheap.size()>k)
             maxheap.pop();
         
         
        }
        vector<int>ans;
        while(maxheap.size()>0)
        {
            cout<<maxheap.top().second;
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};