class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) { cout<<graph.size();
                    int V=graph.size();
                    queue<pair<int,int>>q;
                    int color[V];
                   for(int i=0;i<V;i++)
                       color[i]=-1;
                    for(int i=0;i<V;i++)
                    {
                        if(color[i]==-1)
                        {
                            q.push({i,0});
                            color[i]=0;
                            while(!q.empty())
                            {
                                int parent=q.front().first;
                            
                                q.pop();
                                for(int ele: graph[parent])
                                {  
                                    if(color[ele]==color[parent])
                                        return false;
                                    if(color[ele]==-1)
                                    {
                                        color[ele]=1-color[parent];
                                        q.push({ele,color[ele]});
                                        
                                    }
                                }
                            }
                        }
                    }
     //for(int i=0;i<graph.size()) 
                                                  return true;
    }
};