//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int solve(vector<int>& height,int step,int n,int k,vector<int>&dp)
  
  {
      if(step>=n-1)
        return 0;
      
      if(dp[step]!=-1)
        return dp[step];
    
        int res=INT_MAX;
        for(int i=1;i<=k;i++)
        {
            int idx=step+i;
            if(idx>=n)
                break;
            int cost=0;
            if(idx<n)
            cost=abs(height[idx]-height[step]);
            
            res=min(res,cost+solve(height,idx,n,k,dp));
        }
        return dp[step]=res;
  }
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here    
        vector<int>dp(n,-1);
        
        return solve(height,0,n,k,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends