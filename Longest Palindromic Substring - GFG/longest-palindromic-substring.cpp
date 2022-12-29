//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string s){
        
        int start=0;
        int end=1;
        int l,h;
        int n=s.size();
        // even
        for(int i=1;i<s.size();i++){
            h=i;
            l=i-1;
            
            while(l>=0 && h<n && s[l]==s[h]){
                
                if(h-l+1>end){
                    start=l;
                    end=h-l+1;
                }
                l--;
                h++;
            }
            
        }
        
        // even
        for(int i=1;i<s.size();i++){
            h=i-1;
            l=i+1;
            
            while(l>=0 && h<n && s[l]==s[h]){
                
                if(h-l+1>end){
                    start=l;
                    end=h-l+1;
                }
                l--;
                h++;
            }
            
        }
        
        return s.substr(start,end);
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends