class Solution {
public:
    double findMedianSortedArrays(vector<int>&a, vector<int>&b) {
      if(a.size()>b.size())
         return findMedianSortedArrays(b,a);
      int x=a.size(),y=b.size(),low=0,high=x,px,py;
    while(low<=high)
    { px=low+(high-low)/2;
      py=(x+y+1)/2-px;
     int maxleftA=px==0?INT_MIN:a[px-1];
     int minrightA=px==x?INT_MAX:a[px];
     int maxleftB=py==0?INT_MIN:b[py-1];
     int minrightB=py==y?INT_MAX:b[py];
     if(maxleftA<=minrightB&&minrightA>=maxleftB)
     { if((x+y)%2==0)
         return (double(max(maxleftA,maxleftB)+min(minrightA,minrightB))/2);
    else
        return double(max(maxleftA,maxleftB));
     }
     else
         if(maxleftA>minrightB)
          high=px-1;
         else
          low=px+1;
        
    }
        return 0;
    }
};
