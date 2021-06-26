class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
     int n=edges.size();
     vector<vector<int>>graph(n+1);
        vector<bool>vis(n+1);
        for(auto edge: edges)
        {   fill(begin(vis),end(vis),false);
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
            if(dfs(vis,graph,edge[0],-1))
                return edge;
        }
        return {};
    }
    bool dfs(vector<bool>vis,vector<vector<int>>&graph,int cur,int par)
    {
        vis[cur]=true;
        for(auto child:graph[cur])
        {   if(!vis[child])
        {
              if(dfs(vis,graph,child,cur))
                return true;
        }
            if(vis[child]&&child!=par)
                return true;
          
        }
        return false;
    }
    
};