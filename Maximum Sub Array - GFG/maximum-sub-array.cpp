//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int mx=INT_MIN;
    vector<int>res;
    
    void findmax(int a[],int l,int h){
        int sum=0;
        for(int i=l;i<h;i++){
            sum+=a[i];
        }
        if(sum>mx || (sum==mx && res.size()<(h-l))){
            res.clear();
          for(int i=l;i<h;i++)
            res.push_back(a[i]);
           mx=sum;
        }
        
        
    }
    void solve(int a[],int l,int h){
        if(l<h){
            int i=l;
            while(i<h && a[i]>=0)
                i++;
            findmax(a,l,i);
            while(i<h && a[i]<0)
            i++;
            if(i<h)
            solve(a,i,h);
            
        }
    }
	vector<int> findSubarray(int a[], int n) {
	    
	    
	    solve(a,0,n);
	    
	    return res;
	    
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

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
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends