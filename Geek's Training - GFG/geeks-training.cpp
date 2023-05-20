//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int solve(vector<vector<int>>& points,int day,int n,int prev,vector<vector<int>>&dp)
  {
      if(day>=n)
        return 0;
        
    if(dp[day][prev+1]!=-1)
        return dp[day][prev+1];
    int score=0;
    int ans=0;
    for(int i=0;i<3;i++)
    {
        if(prev==-1 || i!=prev)
        score=points[day][i]+solve(points,day+1,n,i,dp);
        
        ans=max(ans,score);
        
    }
    
    return dp[day][prev+1]= ans;
    
  }
    int maximumPoints(vector<vector<int>>& points, int n) {
        vector<vector<int>>dp(n,vector<int>(4,-1));
        return solve(points,0,n,-1,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends