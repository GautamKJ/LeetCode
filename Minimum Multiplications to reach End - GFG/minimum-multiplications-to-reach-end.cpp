//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
#define MOD 100000
class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        
        // bfs
        queue<pair<int,int>>q;
        q.push({0,start});
        vector<int>mp(100000,0);
        mp[start]=1;
        
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            int step=temp.first;
            int s=temp.second;
          
            if(s==end)
                return step;
            
            for(int x:arr)
            {
                
                int val=(s*x)%MOD;
                if(mp[val]==0){
                    mp[val]=1;
                q.push({step+1,val});
                }
            }
            
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends