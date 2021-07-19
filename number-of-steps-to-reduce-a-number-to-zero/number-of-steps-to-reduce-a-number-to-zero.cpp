class Solution {
public:
    int numberOfSteps(int num) {
        // no of steps to reduce it to zero
        int ans=0;
        if(num==0)
            return 0;
        while(num)
        {
            if(num&1)
                ans+=2;
            else
                ans+=1;
            num=num>>1;
        }
        return ans-1;
    }
};