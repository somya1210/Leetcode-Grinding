class Solution {
public:

    bool find(vector<vector<char>>& board,int i,int j,int index,string word,vector<vector<bool>>&vis)
    {
        if(i<0||j<0||i>=board.size()||j>=board[0].size()||vis[i][j]==true)
            return false;
          if(index>=word.length())
            return false;
        if(word[index]!=board[i][j])
            return false;
        if(index==word.length()-1&&board[i][j]==word[index])
            return true;
      
        vis[i][j]=true;
        bool f1=find(board,i+1,j,index+1,word,vis);
                bool f2=find(board,i-1,j,index+1,word,vis);
                bool f3=find(board,i,j+1,index+1,word,vis);
                bool f4=find(board,i,j-1,index+1,word,vis);
        vis[i][j]=false;
        return f1||f2||f3||f4;
    }
    bool exist(vector<vector<char>>& board, string word) {
            vector<vector<bool>>vis(board.size(),vector<bool>(board[0].size(),false));
      for(int i=0;i<board.size();i++)
      {
          for(int j=0;j<board[0].size();j++)
          {
              if(board[i][j]==word[0])
              {  //memset(vis,false,sizeof(vis));
    
                  if(find(board,i,j,0,word,vis))
                      return true;
              }}
          }
      
        return false;
    }
};