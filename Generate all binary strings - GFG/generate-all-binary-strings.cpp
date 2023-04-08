//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void solve(int n,string s)
{
    if(n==0)
        {
            cout<<s<<" ";
            return;
        }
    
    int idx=s.size();
    
    solve(n-1,s+"0");
    
    if(idx==0 || s[idx-1]!='1')
        solve(n-1,s+"1");
    
    
}
    void generateBinaryStrings(int num){
        //Write your code
        solve(num,"");
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends