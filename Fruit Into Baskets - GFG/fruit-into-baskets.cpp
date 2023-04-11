//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        
        int i=0,j=0;
        int ans=0;
        unordered_map<int,int>mp;
        int dist_tree=2;
        
        while(i<fruits.size())
        {
            mp[fruits[i]]++;
            
            if(mp[fruits[i]]==1)
                dist_tree--;
            
            if(dist_tree<0)
            {
                ans=max(ans,i-j);
                
                while(dist_tree<0)
                {
                    mp[fruits[j]]--;
                    if(mp[fruits[j]]==0)
                        dist_tree++;
                    j++;
                }
            }
            i++;
        }
        ans=max(ans,i-j);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends