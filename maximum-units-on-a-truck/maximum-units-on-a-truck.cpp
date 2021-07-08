class Solution {
public:
    static bool mycomp(vector<int>&a,vector<int>&b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        //  sort the array according to second value and them keep on adding inin answer till size is less
        sort(boxTypes.begin(),boxTypes.end(),mycomp);
        int ans=0,curr=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            curr+=boxTypes[i][0];
            if(curr<truckSize)
                ans+=boxTypes[i][0]*boxTypes[i][1];
            else
            {
             curr=curr-boxTypes[i][0];
                int diff=truckSize-curr;
                ans+=boxTypes[i][1]*diff;
                break;
            }
        }
        return ans;
    }
   
    // 1*3 +2*2+ 1*1 ->8 
    // curr=1 3 curr=3 4 curr=3 
   //  5*10+3*9+2*7 ->50+27+14->91
  //   5+3+4 
};