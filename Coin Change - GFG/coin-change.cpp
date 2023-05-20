//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long int solve(int coins[], int N, int sum,int idx,vector<vector<long long int>>&dp)
  {
      if(sum==0)
        return 1;
    
        if(sum<0 ||idx>=N)
            return 0;
        if(dp[sum][idx]!=-1)
            return dp[sum][idx];
        long long int cnt=0;
        for(int i=idx;i<N;i++)
        {
            cnt+=solve(coins,N,sum-coins[i],i,dp);
            
        }
        return dp[sum][idx]= cnt;
  }
  
//   long long int solveTab(int coins[], int N, int sum)
//   {
//       vector<vector<int>>dp(N,vector<int>(sum+1,0));
      
//       for(int i=0;i<N;i++)
//       {
//           dp[i][0]=1;
//       }
      
//       for(int s=1;s<=sum;s++)
//       {
//             long long int cnt=0;
//         for(int i=idx;i<N;i++)
//         {
//             cnt+=solve(coins,N,sum-coins[i],i);
            
//         }
//         return cnt;
          
//       }
//   }
    long long int count(int coins[], int N, int sum) {

        vector<vector<long long int>>dp(sum+1,vector<long long int>(N,-1));
        return solve(coins,N,sum,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends