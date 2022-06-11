// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>ans;
        find(nums,0,nums.size()-1,ans);
        return ans;
    }
    void find(vector<int>&nums,int start,int end,vector<int>&ans)
    {
        if(start>end)
         return ;
        int mid=start+(end-start)/2;
       // Node* root=new Node(nums[mid]);
        ans.push_back(nums[mid]);
        find(nums,start,mid-1,ans);
        find(nums,mid+1,end,ans);
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends