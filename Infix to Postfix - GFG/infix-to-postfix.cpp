//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int precedence(char op1)
    {
        if(op1=='^')
            return 3;
        if(op1=='*' || op1=='/')
            return 2;
        if(op1=='+' || op1=='-')
            return 1;
        
        return 0;
        
    }
    string infixToPostfix(string s) {
        // Your code here
        
        stack<char>st;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            
            if((s[i]>='a' && s[i]<='z') || ((s[i]>='A' && s[i]<='Z'))  || ((s[i]>='1' && s[i]<='9')))
                ans+=s[i];
            
            else if(s[i]=='(')
                st.push(s[i]);
            
            else if(s[i]==')')
                {
                    while(st.top()!='(')
                    {char op1=st.top();
                        st.pop();
                        ans+=op1;
                    }
                    st.pop();
                }
            
            else
            {
                while(!st.empty() && precedence(s[i])<=precedence(st.top()))
                {
                   char op1=st.top();
                        st.pop();
                        ans+=op1;
                }
                st.push(s[i]);
            }
            
        }
        
        while(!st.empty())
        {
            char op1=st.top();
                        st.pop();
                        ans+=op1;
        }
        
        return ans;
        
        
        
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends