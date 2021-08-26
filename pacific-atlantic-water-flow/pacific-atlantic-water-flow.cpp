class Solution {
public:
    bool inlimits(int i,int j,int n,int m)
    {
        if(i<0||j<0||i>=n||j>=m)
            return false;
        return true;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        queue<pair<int,int>>q;
        vector<vector<int>>ans;
        vector<vector<bool>>vis(heights.size(),vector<bool>(heights[0].size(),false));
        for(int i=0;i<heights[0].size();i++)
        {
            q.push({0,i});
            vis[0][i]=true;
        }
        for(int i=1;i<heights.size();i++)
        {
            q.push({i,0});
            vis[i][0]=true;
        }
        int n=heights.size(),m=heights[0].size();
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(inlimits(x+1,y,n,m)&&vis[x+1][y]==false&&heights[x][y]<=heights[x+1][y])
            {
                q.push({x+1,y});
                vis[x+1][y]=true;
            }
             if(inlimits(x-1,y,n,m)&&vis[x-1][y]==false&&heights[x][y]<=heights[x-1][y])
            {
                q.push({x-1,y});
                 vis[x-1][y]=true;
            }
             if(inlimits(x,y+1,n,m)&&vis[x][y+1]==false&&heights[x][y]<=heights[x][y+1])
            {
                q.push({x,y+1});
                 vis[x][y+1]=true;
            }
             if(inlimits(x,y-1,n,m)&&vis[x][y-1]==false&&heights[x][y]<=heights[x][y-1])
            {
                q.push({x,y-1});
                 vis[x][y-1]=true;
            }
            
            
        } // pacific
           queue<pair<int,int>>q2;
        vector<vector<bool>>vis2(heights.size(),vector<bool>(heights[0].size(),false));
        for(int i=0;i<heights[0].size();i++)
        {
            q2.push({n-1,i});
            vis2[n-1][i]=true;
        }
      
        for(int i=0;i<heights.size()-1;i++)
        {
            q2.push({i,m-1});
            vis2[i][m-1]=true;
        }
        
        while(!q2.empty())
        {
            int x=q2.front().first;
            int y=q2.front().second;
            q2.pop();
            if(inlimits(x+1,y,n,m)&&vis2[x+1][y]==false&&heights[x][y]<=heights[x+1][y])
            {
                q2.push({x+1,y});
                vis2[x+1][y]=true;
            }
             if(inlimits(x-1,y,n,m)&&vis2[x-1][y]==false&&heights[x][y]<=heights[x-1][y])
            {
                q2.push({x-1,y});
                 vis2[x-1][y]=true;
            }
             if(inlimits(x,y+1,n,m)&&vis2[x][y+1]==false&&heights[x][y]<=heights[x][y+1])
            {
                q2.push({x,y+1});
                 vis2[x][y+1]=true;
            }
             if(inlimits(x,y-1,n,m)&&vis2[x][y-1]==false&&heights[x][y]<=heights[x][y-1])
            {
                q2.push({x,y-1});
                 vis2[x][y-1]=true;
            }
            
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==true&&vis2[i][j]==true)
                {
                    vector<int>b;
                    b.push_back(i);
                    b.push_back(j);
                    ans.push_back(b);
                }
            }
        }
        return ans;
        
    }
};