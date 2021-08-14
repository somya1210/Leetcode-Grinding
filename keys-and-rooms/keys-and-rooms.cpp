class Solution {
public:
    void dfs(int source,vector<bool>&vis,vector<vector<int>>& rooms)
    {
        if(vis[source])
            return;
        vis[source]=true;
        for(int ele: rooms[source])
        {
            if(!vis[ele])
                dfs(ele,vis,rooms);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>vis(rooms.size(),false);
        dfs(0,vis,rooms);
    int n=rooms.size();
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
                return false;
        }
        return true;
    }
};