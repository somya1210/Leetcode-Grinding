class Solution {
public:
   /* int todecimal(string a)
    {
        // 1 0 1 0
        // 8 4 2 1
        // 1 1
        // 2 1
        int n=a.length();
        long long int ans=0,i=0; 
        while(i<a.length())
        { int b=a[n-1-i]-'0';
          ans+=pow(2,i)*b;
    
            i++;
           // n--;
        }
        return ans;
    }
    */
    // 1 1
    // 2 1
    /*string tobinary(int a)
    {
        string ans="";
        // 4 / 2 
        while(a)
        {
            int rem=a%2;
            if(rem==0)
                ans+='0';
            else
                ans+='1';
            a=a/2;
            
        }
        return ans;
    }
    */
    string addBinary(string a, string b) {
    // 1 1
   //  1 0 
        if(a=="0"&&b=="0")
          return "0";
        string ans="";
        int p=a.length()-1,q=b.length()-1;
        int carry=0;
        while(p>=0||q>=0)
        {
         int sum=carry;
            
            if(p>=0)
                sum+=a[p]-'0';
            if(q>=0)
                sum+=b[q]-'0';
            if(sum%2==0)
                ans+='0';
            else
                ans+='1';
            //ans+=sum%2;
            carry=sum/2;
            
         
            p--; q--;
        }
        if(carry==1)
            ans+='1';
        
        reverse(ans.begin(),ans.end());
        return ans;
   
    }
};