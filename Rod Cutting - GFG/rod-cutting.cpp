//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int solve(int price[],int n,int i,int &sz,vector<vector<int>>&dp)
  {
      if(n<=i)
        return 0;
    
      if(dp[n][i]!=-1)
        return dp[n][i];
        
        int inc=0,exc=0;
        
        inc=price[i]+solve(price,n-i-1,i,sz,dp);
        exc=solve(price,n,i+1,sz,dp);
        
        return dp[n][i]= max(inc,exc);
  }
    int cutRod(int price[], int n) {
        
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        
        return solve(price,n,0,n,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends