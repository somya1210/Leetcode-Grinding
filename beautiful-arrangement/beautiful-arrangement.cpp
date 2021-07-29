class Solution {
public:
    void help(int n,int pos,vector<bool>&vis,int &count)
    {
        if(pos>n)
        {count++;
            return;}
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false&&(i%pos==0||pos%i==0))
            {
                vis[i]=true;
                help(n,pos+1,vis,count);
                vis[i]=false;
            }
        }
    }
    int countArrangement(int n) {
        //[ 1 2 ]
        //[ 2 1]
        // 1 2 3 4
        // 4 2 3 1
        // 1 2 3 4 5 
        // 5 4 3 2 1
        // it involves to create entire array 
        // permutation problem
        vector<bool>vis(n+1,false);
        int count=0;
        help(n,1,vis,count);
        return count;
    }
};