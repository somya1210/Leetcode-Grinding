class Solution {
public:

    int rangeBitwiseAnd(int left, int right) {
        // left
        // right
        // 101 
        // 111
        // 110
        int res=0,mask=0;
        for(int i=31;i>=0;i--)
        { int m=1<<i&left;
          int n=1<<i&right;
    
            if(m!=n)
                break;
          if(m!=0)
            res+=1<<i;
        }
        return res;
       
    }
};