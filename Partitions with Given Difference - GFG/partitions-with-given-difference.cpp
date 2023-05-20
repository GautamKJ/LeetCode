//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define MOD 1000000007

class Solution {
  public:
  int solve(vector<int>& arr,int n,int d,int i,int cursum,int totalsum,int ele,vector<vector<int>>&dp)
  {
      if(i==n)
        {
           int rem=n-ele;
           
           
           
                if((totalsum-2*cursum)==d){
                    
                    return 1;
                }
                    
            
                
            return 0;
        }
    if(dp[i][cursum]!=-1)
        return dp[i][cursum];
    int inc=0,exc=0;
    
    inc=solve(arr,n,d,i+1,cursum+arr[i],totalsum,ele+1,dp)%MOD;
    exc=solve(arr,n,d,i+1,cursum,totalsum,ele,dp)%MOD;
    
    return dp[i][cursum]=(inc+exc)%MOD;
        
  }
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int sum=0;
        int ele=0;
        
        
        for(int i=0;i<n;i++)
            sum+=arr[i];
        
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
            
        return solve(arr,n,d,0,0,sum,ele,dp)%MOD;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends