//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  int solve(vector<int>& height,int step,int n,vector<int>&dp)
  {
      if(step>=n-1)
        return 0;
    
    if(dp[step]!=-1)
        return dp[step];
    int oneStep=INT_MAX,twoStep=INT_MAX;
    
    if(step+1<n)
    {
        oneStep=abs(height[step]-height[step+1])+solve(height,step+1,n,dp);
    }
    if(step+2<n)
    {
        twoStep=abs(height[step]-height[step+2])+solve(height,step+2,n,dp);
    }
    
    return dp[step]=min(oneStep,twoStep);
  
        
  }
  
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int>dp(n,-1);
        return solve(height,0,n,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends