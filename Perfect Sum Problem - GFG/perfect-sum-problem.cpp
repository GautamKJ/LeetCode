//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
int MOD=1e9+7;
	public:
	int solve(int arr[],int i, int n, int sum,vector<vector<int>>&dp)
{
    if(i==n)
        {
            if(sum==0)
                return 1;
            return 0;
        }
    
    if(sum<0)
        return 0;
    
    if(dp[i][sum]!=-1)
        return dp[i][sum];
    
    int ans=0;
    
    ans+=solve(arr,i+1,n,sum-arr[i],dp)%MOD;
    ans+=solve(arr,i+1,n,sum,dp)%MOD;
    
    return dp[i][sum]=ans%MOD;
}
	int perfectSum(int arr[], int n, int sum)
	{
	  
	  vector<vector<int>>dp(n,vector<int>(sum+1,-1));
	    
	    int cnt=solve(arr,0,n,sum,dp)%MOD;
	  
        return cnt;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends