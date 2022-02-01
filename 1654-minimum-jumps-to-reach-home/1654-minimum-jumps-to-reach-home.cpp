class Solution {
public:
  
    int bfs(unordered_set<int>& vis,int a,int b,int x){
        queue<pair<int,bool>> q;
        q.push({0,true});
        int ans = 0;
        
        while(!q.empty()){
            int count = q.size();
            for(int i=0; i<count; i++){
                int currPoint = q.front().first;
                bool currStatus = q.front().second;
                q.pop();
                
                if(currPoint == x) return ans;
                if(vis.count(currPoint)) continue;
                
                vis.insert(currPoint);
                
                if(currStatus && currPoint - b >= 0){
                    q.push({currPoint - b,false});
                }
                if(currPoint - b <= 2000){
                    q.push({currPoint + a,true});
                }
            }
            ans++;
        }
        return -1;
    }
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        unordered_set<int> vis;
        for(int &v : forbidden) vis.insert(v);
        
        return bfs(vis,a,b,x);
    }
};