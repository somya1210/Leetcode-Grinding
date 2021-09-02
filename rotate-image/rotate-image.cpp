class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
            if(mat.size()!=1)
        {
            int n = mat.size();
            for(int i=0;i<(n/2);i++)
            {
                for(int j=i;j<n-i-1;j++)
                {
                    int tmp = mat[i][j];
                    mat[i][j] = mat[n-j-1][i];
                    mat[n-j-1][i] = mat[n-i-1][n-j-1];
                    mat[n-i-1][n-j-1] = mat[j][n-i-1];
                    mat[j][n-i-1] = tmp;
                }
            }
        }
    }
};