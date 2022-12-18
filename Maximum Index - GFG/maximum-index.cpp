//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int A[], int N) {
          int lmin[N],rmax[N];
        lmin[0]=A[0];
        rmax[N-1]=A[N-1];
        
        // min array
        for(int i=1;i<N;i++)
            lmin[i]=min(lmin[i-1],A[i]);
    
        // max array
        for(int i=N-2;i>=0;i--)
        rmax[i]=max(rmax[i+1],A[i]);
        
        int i=0,j=0;
        int ans=-1;
        
        while(i<N && j<N)   
        {
            if(lmin[i]<=rmax[j])
                {ans=max(j-i,ans);
                j++;
                }
            else
            i++;
                
        }
        return ans;
        
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends