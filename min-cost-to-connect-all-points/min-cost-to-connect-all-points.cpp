class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
     int ans=0;
       // prims algo
        vector<bool>visited(points.size());
        // n nodes 
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;
        visited[0]=true;
        for(int i=1;i<points.size();i++)
        {
            minheap.push({abs(points[i][0]-points[0][0])+abs(points[i][1]-points[0][1]),i});
        } int count=0;
        while(!minheap.empty())
        {
            int dist=minheap.top().first;
            int near=minheap.top().second;
            minheap.pop();
            if(visited[near]==false)
            { count++; 
              visited[near]=true;
              ans+=dist;
             for(int i=0;i<points.size();i++)
             {
                 if(!visited[i])
                 {
                     minheap.push({abs(points[near][0]-points[i][0])+abs(points[near][1]-points[i][1]),i});
                }
             }
            }
        }
        return ans;
       
    }
};