class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int ans=0;
        for(int i=0;i<distance.size();i++)
        {
            ans+=distance[i];
        }
        int oneway=0;
        if(start>destination)
        {
            int t=start;
            start=destination;
            destination=t;
        }
        for(int i=start;i<destination;i++)
        {
            oneway+=distance[i];
        }
        int otherway=ans-oneway;
        return min(otherway,oneway);
    }
};