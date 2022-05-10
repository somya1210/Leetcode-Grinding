// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>ans;
        string x;
        find(a,N,ans,x,0);
        return ans;
    }
    void find(int a[],int N,vector<string>&ans,string &x,int i)
    {
        if(x.length()==N)
        {
            ans.push_back(x);
            return;
        }
       
            if(a[i]==2)
            {   x+='a';
                find(a,N,ans,x,i+1);
                x.pop_back();//(x.length()-1);
                x+='b';
                find(a,N,ans,x,i+1);
                x.pop_back();
                 x+='c';
                find(a,N,ans,x,i+1);
                x.pop_back();
            }
            if(a[i]==3)
            {   x+='d';
                find(a,N,ans,x,i+1);
                x.pop_back();//(x.length()-1);
                x+='e';
                find(a,N,ans,x,i+1);
                x.pop_back();
                 x+='f';
                find(a,N,ans,x,i+1);
                x.pop_back();
                
                
            }
            if(a[i]==4)
            {   x+='g';
                find(a,N,ans,x,i+1);
                x.pop_back();//(x.length()-1);
                x+='h';
                find(a,N,ans,x,i+1);
                x.pop_back();
                 x+='i';
                find(a,N,ans,x,i+1);
                x.pop_back();
                
                
            }
            if(a[i]==5)
            {   x+='j';
                find(a,N,ans,x,i+1);
                x.pop_back();//(x.length()-1);
                x+='k';
                find(a,N,ans,x,i+1);
                x.pop_back();
                 x+='l';
                find(a,N,ans,x,i+1);
                x.pop_back();
                
                
            }
            if(a[i]==6)
            {   x+='m';
                find(a,N,ans,x,i+1);
                x.pop_back();//(x.length()-1);
                x+='n';
                find(a,N,ans,x,i+1);
                x.pop_back();
                 x+='o';
                find(a,N,ans,x,i+1);
                x.pop_back();
                
                
            }
            if(a[i]==7)
            {   x+='p';
                find(a,N,ans,x,i+1);
                x.pop_back();//(x.length()-1);
                x+='q';
                find(a,N,ans,x,i+1);
                x.pop_back();
                 x+='r';
                find(a,N,ans,x,i+1);
                x.pop_back();
                    x+='s';
                find(a,N,ans,x,i+1);
                x.pop_back();
                
                
            }
            if(a[i]==8)
            {   x+='t';
                find(a,N,ans,x,i+1);
                x.pop_back();//(x.length()-1);
                x+='u';
                find(a,N,ans,x,i+1);
                x.pop_back();
                 x+='v';
                find(a,N,ans,x,i+1);
                x.pop_back();
                
                
            }
                 if(a[i]==9)
            {   x+='w';
                find(a,N,ans,x,i+1);
                x.pop_back();//(x.length()-1);
                x+='x';
                find(a,N,ans,x,i+1);
                x.pop_back();
                 x+='y';
                find(a,N,ans,x,i+1);
                x.pop_back();
                    x+='z';
                find(a,N,ans,x,i+1);
                x.pop_back();
                
                
            }
        
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends