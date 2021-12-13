class Solution {
public:
    bool inbound(int i,int j,int n,int m)
    {
        if(i<0||j<0||i>=n||j>=m)
            return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
     int time=0;
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        int n=grid.size(),m=grid[0].size();
        while(!q.empty())
        {
            int no=q.size(); bool first =true;
            while(no--)
            {
                int x=q.front().first;
                int y=q.front().second; 
                q.pop();
                if(inbound(x-1,y,n,m)&&grid[x-1][y]==1)
                {
                 
                    q.push({x-1,y});
                    grid[x-1][y]=2;
                }
                if(inbound(x+1,y,n,m)&&grid[x+1][y]==1)
                {
                 
                    q.push({x+1,y});
                    grid[x+1][y]=2;
                }
                if(inbound(x,y-1,n,m)&&grid[x][y-1]==1)
                {
                
                    q.push({x,y-1});
                    grid[x][y-1]=2;
                }
                if(inbound(x,y+1,n,m)&&grid[x][y+1]==1)
                {
               
                    q.push({x,y+1});
                    grid[x][y+1]=2;
                }
            }
            if(q.empty()==false)
                time++;
           
        }//&&grid[x][y]==1 is impo condition kyunki tab hi to pta chalega ki isme fresh h to isko rot kar do,kyunki agr emoty hua to nhi fill ho paega na
         for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        return time;
    }
};