class Solution {
public:
    bool isvalid(int i,int j,int n,int m)
    {
        if(i<0||j<0||i>=n||j>=m)
            return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push(make_pair(i,j));
                }
            }
        }
        
        int ans=-1,x=grid.size(),y=grid[0].size();
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                if(isvalid(i+1,j,x,y)&&grid[i+1][j]==1)
                {
                    grid[i+1][j]=2;
                    q.push(make_pair(i+1,j));
                }
                if(isvalid(i,j+1,x,y)&&grid[i][j+1]==1)
                {
                    grid[i][j+1]=2;
                    q.push(make_pair(i,j+1));
                }
                if(isvalid(i-1,j,x,y)&&grid[i-1][j]==1)
                {
                    grid[i-1][j]=2;
                    q.push(make_pair(i-1,j));
                }
                if(isvalid(i,j-1,x,y)&&grid[i][j-1]==1)
                {
                    grid[i][j-1]=2;
                    q.push(make_pair(i,j-1));
                }
            }
            ans++;
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        if(ans==-1)
            return 0;
        return ans;
    }
};