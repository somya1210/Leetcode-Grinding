class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int x) {
      int i=0,j=matrix[0].size()-1;
        while(i<matrix.size()&&j>=0)
        {
            if(matrix[i][j]==x)
             return 1;
            else
             if(matrix[i][j]<x)
             {
                 i++;
             }
             else
              if(matrix[i][j]>x)
               j--;
            
        }
        return 0;   
    }
};