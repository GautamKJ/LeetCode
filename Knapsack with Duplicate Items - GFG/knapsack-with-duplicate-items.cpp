//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int solve(int val[],int wt[],int N,int W,vector<vector<int>>&dp)
{
    if(N<0 || W<=0)
        return 0;
    if(dp[N][W]!=-1)
        return dp[N][W];
    int inc=0,exc=0;
    
    if(W-wt[N]>=0)
    inc=val[N]+solve(val,wt,N,W-wt[N],dp);
    
    exc=solve(val,wt,N-1,W,dp);
    
    return dp[N][W]= max(inc,exc);
}
    int knapSack(int N, int W, int val[], int wt[])
    {
          vector<vector<int>>dp(N,vector<int>(W+1,-1));
        return solve(val,wt,N-1,W,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends