//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int zero=0,one=0;
        
        int j=0;
        int ans=0;
        int i;
        for( i=0;i<n;i++){
            if(arr[i]==0)
                zero++;
                
            if(zero==m+1)
            {
                if(j<i){
                i--;
                zero--;
                }
                ans=max(ans,i-j+1);
                if(arr[j]==0 && zero>0)
                    zero--;
                    j++;
            }
            
                
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
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends