class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        // least time 
        // sort 
        vector<int>time(dist.size(),0);
        for(int i=0;i<dist.size();i++)
        {   if(dist[i]%speed[i]==0)
            time[i]=dist[i]/speed[i];
            else
                time[i]=dist[i]/speed[i]+1;
        }
        sort(time.begin(),time.end());
        int counter=0,j=0,ans=0;
        while(j<time.size())
        {
            if(time[j]>counter)
            { ans++;
             counter++; j++;
             }
            else
                break;
        }
        //
      //  [3,5,7,4,5]
//[2,3,6,3,2]
        // 1 
        return ans;
    }
};