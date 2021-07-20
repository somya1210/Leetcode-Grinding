class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        //m*n approach easy
        // m*logn or n*logm
        // find max value of column 
        int start=0,end=mat[0].size()-1;
        vector<int>ans;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int row=0;
            for(int i=0;i<mat.size();i++)
            {
                if(mat[row][mid]<mat[i][mid])
                    row=i;
            }
            if((mid==0||mat[row][mid]>mat[row][mid-1])&&(mid==mat[0].size()-1||mat[row][mid]>mat[row][mid+1]))
                return {row,mid};
            else
             if(mid>0&&mat[row][mid-1]>mat[row][mid])
                end=mid-1;
             else
                start=mid+1;
        }
        return {-1,-1};
    }
};