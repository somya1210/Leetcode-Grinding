class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
       // vector<vector<int>>dp(n,vector<int>(m));
        int count=0;
        vector<vector<int>>ans(n,vector<int>(m,0));
        int dirs[8][2]={{1,1},{1,-1},{-1,1},{1,0},{0,1},{-1,0},{0,-1},{-1,-1}};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            { count=0;
              for(int k=0;k<8;k++)
              {
                  int next_x=dirs[k][0]+i;
                  int next_y=dirs[k][1]+j;
                  if(next_x>=0&&next_x<n&&next_y>=0&&next_y<m&&(board[next_x][next_y]==1||board[next_x][next_y]==2))
                      count++;
              }
              if(board[i][j]==1)
               {
                    if(count<2||count>3)
                        board[i][j]=2;
                  // alive to dead
                }
                else
                {
                    if(count==3)
                        board[i][j]=3;
                    // dead to alive
                }
            }
        }
      for(int i=0;i<n;i++)
      {for(int j=0;j<m;j++)
      {
       if(board[i][j]==2)
           board[i][j]=0;
        if(board[i][j]==3)
            board[i][j]=1;
      }
      }
        
    }
};