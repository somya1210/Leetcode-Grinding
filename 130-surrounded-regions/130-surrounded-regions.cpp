class Solution {
public:
    void boundarydfs(int i,int j,vector<vector<char>>&grid)
    {
     if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]!='O')
         return;
        
        if(grid[i][j]=='O')
            grid[i][j]='*';
        boundarydfs(i+1,j,grid);
        boundarydfs(i-1,j,grid);
        boundarydfs(i,j+1,grid);
        boundarydfs(i,j-1,grid);
    }
    void solve(vector<vector<char>>& board) {
   //  vector<vector<bool>vis(board.size(),vector<bool>(board[0].size()));
        for(int i=0;i<board.size();i++)
        {
            if(board[i][0]=='O')
            {
                boundarydfs(i,0,board);
            }
            if(board[i][board[0].size()-1]=='O')
            {
                boundarydfs(i,board[0].size()-1,board);
            }
        }
        for(int j=0;j<board[0].size();j++)
        {
            if(board[0][j]=='O')
            {
                boundarydfs(0,j,board);
            }
            if(board[board.size()-1][j]=='O')
            {
                boundarydfs(board.size()-1,j,board);
            }
        }
          for(int i=0;i<board.size();i++)
          {  for(int j=0;j<board[0].size();j++)
        {  
            if(board[i][j]=='O')
            {
               board[i][j]='X';
            }
            else
                if(board[i][j]=='*')
                    board[i][j]='O';
                  
            
        }
    }
          
        
    
    }
};