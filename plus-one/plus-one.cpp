class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n=digits.size()-1;
        int temp=digits[n]+1;
        vector<int>ans;
        if(temp<10)
        {
            digits[n]=temp;
            ans=digits;
            return ans;
        }
        else
        {
            // temp= 10
            ans.push_back(0);
            int carry=1,i=n-1;
            while(i>=0)
            {
                temp=digits[i]+carry;
                ans.push_back(temp%10); i--;
                if(temp<10)
                {
                    carry=0;
                }
                else
                    carry=1;
            }
            if(carry==1)
                ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
// 1 2 3 +1 - 1 2 4 
// 1 2 9 +1 - 1  3  0
 // 9 9 9 -         0
    }
    // 9 9 9 
};