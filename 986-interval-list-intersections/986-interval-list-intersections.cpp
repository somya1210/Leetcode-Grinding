class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        if(A.size()==0&&B.size()!=0)
            return A;
        if(A.size()!=0&&B.size()==0)
            return B;
        int i=0,j=0;
        int n=A.size(),m=B.size();
        vector<vector<int>>ans;
        while(i<n&&j<m)
        {
            int x=max(A[i][0],B[j][0]);
            int y=min(A[i][1],B[j][1]);
            //vector<int>v;
            if(x<=y)
            {//v.push_back(x);
            //v.push_back(y);
            ans.push_back({x,y});}
            if(A[i][1]<B[j][1])
                i++;
            else
                j++;
        }
        return ans;
    }
};