class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      // 0,0 0,1 0,2
    //   1,0 1,1 1,2
    //   2,0 2,1 2,2
        int ans=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            { if(i==j||(i+j)==mat[0].size()-1)
                ans+=mat[i][j];
            }
            
        }
        return ans;
    }
};