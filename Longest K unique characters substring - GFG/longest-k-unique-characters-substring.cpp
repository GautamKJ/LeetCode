//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    
        unordered_map<char,int>m,temp;
        
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            temp[s[i]]++;
        }
        // a--> 3
        // b--> 4
        // c--> 1
        // e--> 3
        int j=0;
        int i=0;
        int c=k;
        int len=-1;
        while(i<s.size())
        {
            temp[s[i]]--;
            if(temp[s[i]]+1==m[s[i]])
            {
                c--;
                
            }
            while(c<0){
                
                len=max(len,i-j);
                
                temp[s[j]]++;
                if(temp[s[j]]==m[s[j]])
                    {c++;
                    
                    }
                    
                j++;
            }
            i++;
            
            
        }
        if(c==0)
        len=max(len,i-j);
    
    return len;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends