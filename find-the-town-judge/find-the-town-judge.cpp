class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
     int celebrity[n+1],to_c[n+1];
        for(int i=1;i<=n;i++)
        { celebrity[i]=1;
         to_c[i]=0;
        }  
        for(int i=0;i<trust.size();i++)
        {
            int from=trust[i][0],to=trust[i][1];
            celebrity[from]=0;
            to_c[to]+=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(celebrity[i]==1&&to_c[i]==n-1)
                return i;
        }
        return -1;
    }
};