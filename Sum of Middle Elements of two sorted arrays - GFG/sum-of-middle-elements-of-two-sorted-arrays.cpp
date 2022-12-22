//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
        if(n==1)
            return ar1[0]+ar2[0];
            int cnt=0;
            int ptr1=0,ptr2=0;
            int sum=0;
            int a1=0,a2=0;
            while(ptr1<n && ptr2<n){
                
                      cnt++;
                if(ar1[ptr1]<ar2[ptr2])
                    {
                       
                      
                        if(cnt==n ||cnt==n+1)
                      {  sum+=ar1[ptr1];
                      a1++;
                        }
                       ptr1++;  
                    }
                else{
                   
                    
                    if(cnt==n ||cnt==n+1)
                    {    sum+=ar2[ptr2];
                    a2++;
                    }
                     ptr2++;
                    
                }
              if(cnt==n+1)
              break;
              
            }
            // cout<<a1<<" "<<a2<<endl;
           
           if(a1+a2<2){
               if(ptr1<n && ptr2<n)
               sum+=min(ar1[ptr1],ar2[ptr2]);
               if(ptr1<n)
               sum+=ar1[ptr1];
               else
               sum+=ar1[ptr2];
           }
            return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends