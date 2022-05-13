class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans;
        for(int i=0;i<numRows;i++)
            
        {
          int size=i+1;
            vector<int>place(size,0);
            place[0]=1;
            place[size-1]=1;
            for(int j=1;j<size-1;j++)
            { if(i!=0)
                place[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(place);
        }
        return ans;
    }
};