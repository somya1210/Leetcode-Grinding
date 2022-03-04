class Solution {
public:
    int minimumSum(int num) {
        int a[4]={0};
        int i=0;
        while(num)
        {   a[i]=num%10;
            num=num/10;
         i++;
        }
        sort(a,a+4);
        int no1=a[0]*10+a[2];
        int no2=a[1]*10+a[3];
        return no1+no2;
         
    }
};