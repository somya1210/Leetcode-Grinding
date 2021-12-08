class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
       // transpose(mat);
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++) // j=i kyunki agr nhi kie toh gadbad 
            {
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int temp=mat[i][j];
                mat[i][j]=mat[i][n-1-j];
                mat[i][n-1-j]=temp;
            }
        }
    }
};