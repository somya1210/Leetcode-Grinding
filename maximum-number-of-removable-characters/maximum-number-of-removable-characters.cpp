class Solution {
public:
    int issequence(int k,string s,string p,vector<int>&remove)
    {
        for(int i=0;i<k;i++)
            s[remove[i]]='A';
        cout<<s<<" ";
        int j=0;
        for(int i=0;i<s.length()&&j<p.length();i++)
        {
            if(s[i]==p[j])
                j++;
        }
        if(j==p.length())
            return 1;
        return 0;
        
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
     // 
        int start=0,end=removable.size(),ans=INT_MIN;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(issequence(mid,s,p,removable))
            {
                ans=max(ans,mid);
                start=mid+1;
            }
            else
                end=mid-1;
        }
        if(ans==INT_MIN)
            return 0;
        return ans;
    }
};