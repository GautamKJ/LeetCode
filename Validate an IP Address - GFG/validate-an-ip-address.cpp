//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
    bool isNum(string s){
        if(s[0]-'0'>9)
            return false;
            
            return true;
        
    }
    bool check(string s){
        
        if(!isNum(s))
            return false;
         if(s.size()==0)
            return false;
             if(s.size()>1 && s[0]=='0')        
                return false;
               return stoi(s)<=255;
                
                
    }
    
    bool solve(string s){
        int n=s.size();
        string temp="";
        int i=0;
        int cnt=0;
        while(i<n){
            while(i<n && s[i]!='.')
               { temp+=s[i];
               i++;
               }
            
            if(s[i]=='.')
                 cnt++;
                 
            if(cnt>3)
            return false;
                if(check(temp)==false)
                    return false;
                    temp="";
                
                
                i++;
                
        }
        if(cnt<3)
        return false;
        return true;
    }
    
        int isValid(string s) {
           
            return solve(s);
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends