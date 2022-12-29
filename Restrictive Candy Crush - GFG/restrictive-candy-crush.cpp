//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string solve(string s,int k){
        string res="";
        stack<char>st;
        int cnt=1;
        int j=0,i=1;
        char ch=s[0];
        while(i<s.size()){
            
            if(s[i]!=ch || i-j==k){
                if(i-j!=k)
                    res+=s.substr(j,i-j);
                    
                j=i;
                ch=s[i];
            }
          i++;
        }
         if(i-j!=k)
          res+=s.substr(j,i-j);
        // cout<<res<<endl;
        return res;
    }
    string Reduced_String(int k,string s){
     
     string ans="";
     
     while(ans!=s){
         ans=s;
         s=solve(s,k);
     }
     return ans;
        
    }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends