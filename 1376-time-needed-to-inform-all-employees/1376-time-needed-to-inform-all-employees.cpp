class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        queue<pair<int,int>>q;
        q.push(make_pair(headID,0));
        int ans=0;
        vector<int>adj[n];
        for(int i=0;i<manager.size();i++)
        {if(manager[i]!=-1)
         adj[manager[i]].push_back(i);   
        }
        // head tak pahuchne k lie 0 time lagega
        // uske baad usko queue m daal dia 
        // q push ki us node tak reach karne m kitne tym lag ra
        while(!q.empty())
        {    int parent=q.front().first;
             int time=q.front().second;
             q.pop();
             int dur=time+informTime[parent];
             ans=max(ans,dur);
              for(int ele: adj[parent])
              {
                  q.push({ele,dur});
              }
             
            
        }
        return ans;
        
    }
};