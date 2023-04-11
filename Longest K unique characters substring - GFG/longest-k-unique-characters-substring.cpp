//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    
      int i=0,j=0;
      int ans=-1;
      int dist_ele=0;
      unordered_map<char,int>mp;
      while(i<s.size())
      {
          mp[s[i]]++;
          
          if(mp[s[i]]==1)
            dist_ele++;
        
        
            if(dist_ele>k)
            {
                ans=max(ans,i-j);
                
                while(dist_ele>k)
                {
                    mp[s[j]]--;
                    
                    if(mp[s[j]]==0)
                        dist_ele--;
                    
                    j++;
                }
            }

          i++;
      }
      if(dist_ele==k)
                ans=max(ans,i-j);
                
        return ans;                
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends