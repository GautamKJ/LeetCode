//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void solve(vector<int>&nums,int i,set<int>&res,int sum,vector<vector<int>>&dp){
        // cout<<sum<<endl;
        if(i==nums.size())
        { res.insert(sum);
        return ;}
        
        if(dp[i][sum]!=-1)
        return ;
        
        dp[i][sum]=1;
        
        // include
        solve(nums,i+1,res,sum+nums[i],dp);
        // exclude
         solve(nums,i+1,res,sum,dp);
    
        
        
            
    }
	vector<int> DistinctSum(vector<int>nums){
	    // Code here
	    int sum=0;
	    int n=nums.size();
	    for(auto x:nums){
	        sum+=x;
	    }
	    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	    vector<int>res;
	    
	    set<int>s;
	    solve(nums,0,s,0,dp);
	    
	   for(auto x:s)
	   res.push_back(x);
	    
	    return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int> ans = obj.DistinctSum(nums);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}

// } Driver Code Ends