//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string s, int k) {
        int cnt=0;
        int n=s.size();
        
        int j=0,i=0;
        int arr[26]={0};
        int temp[26]={0};
        
        for(int i=0;i<n;i++){
               temp[s[i]-'a']++;
                arr[s[i]-'a']++;    
        }
        int c=k-1;
        for(int i=0;i<s.size();i++){
            
            temp[s[i]-'a']--;
            
            if(temp[s[i]-'a']+1==arr[s[i]-'a'])
                c--;
            
            if(i-j+1==k){
                if(c==0)
                    cnt++;
                temp[s[j]-'a']++;
                if(temp[s[j]-'a']==arr[s[j]-'a'])
                    c++;
                j++;
            }
        }
        
            if(i-j+1==k){
                if(c==0)
                    cnt++;}
                    return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends