//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
        vector<int>ans;
        int zero=0,one=0;
        
        for(int i=0;i<n;i++){
            if(str[i]=='1')
            one++;
        }
        if(one==n)
            {
                ans.push_back(-1);
                return ans;
            }
            
        int maxi=0;
        int j=1;
        int i;
        int count=0;
        int l,r;
        for(i=1;i<=n;i++){
            if(str[i-1]=='0')
            count++;
            else
            count--;
            
            if(count>maxi){
                l=j;
                r=i;
                maxi=count;
            }
            
          
            
             if(count<0)
                {
                    count=0;
                    j=i+1;
                }
            
            
            
        }
        
        ans.push_back(l);
        ans.push_back(r);
        return ans;
            
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends