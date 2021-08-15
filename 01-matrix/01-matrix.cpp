class Solution {
public:
    bool in(int i,int j,int n,int m)
    {
        if(i<0||j<0||i>=n||j>=m)
            return false;
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
       // bool vis[10001][10001]; 
          vector<vector<int>> vis(n, vector<int> (m));
      // memset(vis,0,sizeof(vis));
                for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               
                 vis[i][j]=0;
                
            }
        }
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {q.push({i,j}); 
                 vis[i][j]=1;
                }
            }
        }
        int level=1;
        while(!q.empty())
        {
            int no=q.size();
            while(no--)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                if(in(x+1,y,n,m)&&!vis[x+1][y])
                {
                    mat[x+1][y]=mat[x][y]+1;
                    q.push({x+1,y});
                    vis[x+1][y]=1;
                }
                if(in(x-1,y,n,m)&&!vis[x-1][y])
                {
                    mat[x-1][y]=mat[x][y]+1;
                    q.push({x-1,y});
                    vis[x-1][y]=1;
                }
                if(in(x,y+1,n,m)&&!vis[x][y+1])
                {
                    mat[x][y+1]=mat[x][y]+1;
                    q.push({x,y+1});
                    vis[x][y+1]=1;
                }
                if(in(x,y-1,n,m)&&mat[x][y-1]==1&&!vis[x][y-1])
                {
                    mat[x][y-1]=mat[x][y]+1;
                    q.push({x,y-1});
                    vis[x][y-1]=1;
                }
            }
            
        }
        return mat;
    }
};