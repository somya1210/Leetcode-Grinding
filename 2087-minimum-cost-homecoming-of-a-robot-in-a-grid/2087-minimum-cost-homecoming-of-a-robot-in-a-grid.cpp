class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        // all the path will give sam results as the cost involve transition from rows and columns
        int cost=0;
        int i=startPos[0],j=startPos[1],x=homePos[0],y=homePos[1];
        while(i!=x)
        {
            if(i!=0&&i>x)
            {
                cost+=rowCosts[i-1];
                i=i-1;
            }
            else
                if(i!=rowCosts.size()-1&&i<x)
                {
                    cost+=rowCosts[i+1];
                    i=i+1;
                }
        }
                while(j!=y)
        {
            if(j!=0&&j>y)
            {
                cost+=colCosts[j-1];
                j=j-1;
            }
            else
                if(j!=colCosts.size()-1&&j<y)
                {
                    cost+=colCosts[j+1];
                    j=j+1;
                }
        }
        cout<<cost;
        return cost;
        
    }
};