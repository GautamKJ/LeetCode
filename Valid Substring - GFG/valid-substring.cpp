//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
     
        stack<int>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]==')')
            {
                if(!st.empty() && s[st.top()]=='(')
                    st.pop();
             
                else
                st.push(i);
             
            }    
            else
            st.push(i);
            
        }
       
        int end=s.length();
        
        while(!st.empty()){
         int ele=st.top();
         ans=max(ans,end-ele-1);
         end=ele;
            
            st.pop();
        }
            
            
            return max(end,ans);
        
     
     
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends