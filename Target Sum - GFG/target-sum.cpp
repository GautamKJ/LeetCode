//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  int solve(vector<int>&A ,int target,int i,int sum)
  {
      if(i==A.size())
      {
          if(sum==target)
            return 1;
            return 0;
      }
      
      int plus=0,minus=0;
      
      plus=solve(A,target,i+1,sum+A[i]);
      minus=solve(A,target,i+1,sum-A[i]);
      
      return plus+minus;
  }
    int findTargetSumWays(vector<int>&A ,int target) {
        
        return solve(A,target,0,0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends