class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     // 1 0 0 1
        // n=1
        // 1 0 0 0 1
        // how many zeroes have zero on both side 
        int k=0;
        if(flowerbed.size()>1)
        { if(flowerbed[0]==0&&flowerbed[1]==0)
        {k++;
         flowerbed[0]=1;
        }
        if(flowerbed[flowerbed.size()-1]==0&&flowerbed[flowerbed.size()-2]==0)
        {  k++;
                  flowerbed[flowerbed.size()-1]=1;
        }
        }
        else
        {
            if(flowerbed[0]==1&&n==0)
                return true;
            if(flowerbed[0]==0&&n<=1)
                return true;
            return false;
        }
         for(int i=1;i<flowerbed.size()-1;i++)
        {
            if(flowerbed[i]==0&&flowerbed[i-1]==0&&flowerbed[i+1]==0)
            { k++; cout<<"k";
             flowerbed[i]=1;
            } cout<<flowerbed[i]<<" ";
        }
        if(k<n)
            return false;
        return true;
    }
};