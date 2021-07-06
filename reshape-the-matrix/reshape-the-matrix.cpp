class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int k=0;
        int n=mat[0].size()*mat.size();
        if(n!=r*c)
            return mat;
        vector<vector<int>>mat1(1,vector<int>(n));
         vector<vector<int>>ans(r,vector<int>(c));
     for(int i=0;i<mat.size();i++) 
     {
         for(int j=0;j<mat[0].size();j++)
         {
             mat1[0][k]=mat[i][j];
                 k++;
         }
     }
        k=0;
          for(int i=0;i<r;i++) 
     {
         for(int j=0;j<c;j++)
         {
             ans[i][j]=mat1[0][k]; k++;
         }
     }
        return ans;
        
    }
};