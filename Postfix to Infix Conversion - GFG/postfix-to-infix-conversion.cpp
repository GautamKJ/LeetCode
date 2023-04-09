//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool isOperator(char ch)
  {
      if(ch=='+' || ch=='-' || ch=='*'|| ch=='/' || ch=='^')
        return true;
        
        return false;
  }
    string postToInfix(string exp) {
        
        stack<string>st;
        
        
        for(int i=0;i<exp.size();i++)
        {
            
            if(isOperator(exp[i]))
            {
                string op1=st.top();
                st.pop();
                string op2=st.top();
                st.pop();
                
            
                st.push('('+op2+exp[i]+op1+')');
                
            }
            else
            {
                string s="";
                s+=exp[i];
               st.push(s);
             
            }
        }
        
    
    return st.top();
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends