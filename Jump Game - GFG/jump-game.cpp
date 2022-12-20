//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        int i=0;
        int step=A[0];
        int maxi=INT_MIN;
        while(i<N-1){
            
            step--;
            i++;
            maxi=max(maxi,A[i]);
            if(step==0){
                
                step=max(maxi,A[i]);
                maxi=0;
            }
        }
        if(step>=0)
        return 1;
        else
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends