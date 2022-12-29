//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        
        string ans="";
        string temp;
        int i=s.size()-1;
        while(i>=0){
            temp="";
            while(i>= 0 && s[i]!='.')
                {temp+=s[i];
                        i--;
                }
                ans="."+temp+ans;
                i--;
        }
        if(s[0]!='.')
        return ans.substr(1);
        else
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends