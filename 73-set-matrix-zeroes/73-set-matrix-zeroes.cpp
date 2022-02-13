class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       /* map<pair<int,int>,int>map;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    map[make_pair(i,j)]=1;
                }
            }
        } */
        bool col0=false,row0=false;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
            if(matrix[i][j]==0)
            {matrix[i][0]=0;
             matrix[0][j]=0;
             if(i==0)
                 row0=true;
             if(j==0)
                 col0=true;
            }   
            }
        }
      for(int i=1;i<matrix.size();i++)
        {
            
                    for(int j=1;j<matrix[0].size();j++)
                    {
                     if(matrix[i][0]==0||matrix[0][j]==0)
                          matrix[i][j]=0;
                    }
                }
         
        if(row0)
        {
            for(int i=0;i<matrix[0].size();i++)
                matrix[0][i]=0;
        }
        if(col0)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][0]=0;
            }
        }
        }/*
         for(int i=0;i<matrix[0].size();i++)
        {
            
                if(matrix[0][i]==0)
                {
                    for(int j=0;j<matrix.size();j++)
                    {
                        matrix[j][i]=0;
                    }
                }
            
        }*/
    
};