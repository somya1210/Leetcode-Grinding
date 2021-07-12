class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
     int i=num.size()-1;
        vector<int>ans; int carry=0;
        // 2 7 4 
        // 1 8 1
        while(i>=0||k)
        {
            int rem=k%10;
            k=k/10;
            int sum=carry+rem;
            if(i>=0)
                sum+=num[i];
            ans.push_back(sum%10);
            carry=sum/10;
                i--;
        }
        if(carry)
            ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};