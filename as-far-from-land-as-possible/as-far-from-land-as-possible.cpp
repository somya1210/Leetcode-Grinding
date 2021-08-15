class Solution {
public:
    bool inlimits(int i,int j,int n)
    {
        if(i<0||j<0||i>=n||j>=n)
            return false;
        return true;
    }
    int maxDistance(vector<vector<int>>& grid) {
       bool vis[101][101];
        memset(vis,false,sizeof(vis));
        int count_zero=0,count_one=0,n=grid.size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {   q.push({i,j}); vis[i][j]=true;
                 count_one++;}
                else
                    count_zero++;
            }
        }
        if(count_zero==0||count_one==0)
            return -1;
        int ans=0;
        while(!q.empty())
        {
         int no=q.size();
          while(no--)
          {int x=q.front().first;
            int y=q.front().second;
           q.pop();
           
               
               if(inlimits(x+1,y,n)&&!vis[x+1][y])
               {
                   q.push({x+1,y});
                   vis[x+1][y]=true;
               }
            if(inlimits(x-1,y,n)&&!vis[x-1][y])
               {
                   q.push({x-1,y});
                   vis[x-1][y]=true;
               }
            if(inlimits(x,y+1,n)&&!vis[x][y+1])
               {
                   q.push({x,y+1});
                   vis[x][y+1]=true;
               }
            if(inlimits(x,y-1,n)&&!vis[x][y-1])
               {
                   q.push({x,y-1});
                   vis[x][y-1]=true;
               }
           
        }
            ans++;
        }
     return ans-1;   
    }
};