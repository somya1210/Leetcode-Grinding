class Solution {
public:
    int candy(vector<int>& ratings) {
        // 1 2 2
        // 1 2 1
        // 1 0 2
        // 
        vector<int>left(ratings.size(),1);
        vector<int>right(ratings.size(),1);
        for(int i=1;i<ratings.size();i++)
        {
            if(ratings[i]>ratings[i-1])
                left[i]=left[i-1]+1;
        }
        for(int i=ratings.size()-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
                right[i]=1+right[i+1];
        }
        int ans=0;
        for(int i=0;i<ratings.size();i++)
        {
            ans+=max(left[i],right[i]);
        }
        return ans;
    }
    // 1 1 2
};