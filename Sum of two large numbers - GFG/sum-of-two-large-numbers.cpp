//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
     
     int i=X.size()-1;
     int j=Y.size()-1;
     string ans="";
     int carry=0;
        while(i>=0 && j>=0){
            int l1=X[i]-'0';
            int l2=Y[j]-'0';
            
            int sum=l1+l2;
            ans=to_string((sum+carry)%10)+ans;
            carry=(sum+carry)/10;
            i--;
            j--;
            // cout<<"carry "<<carry<<endl;
        }
        
        
        while(i>=0){
            // cout<<carry<<endl;
            int l1=X[i]-'0';
            int sum=l1;
            ans=to_string((sum+carry)%10)+ans;
            carry=(sum+carry)/10;
            i--;
        }
        
        
         while(j>=0){
            int l1=Y[j]-'0';
            int sum=l1;
            ans=to_string((sum+carry)%10)+ans;
            // cout<<ans<<endl;
            carry=(sum+carry)/10;
            j--;
        }
        if(carry!=0){
            ans=to_string(carry)+ans;
        }
        string res;
         i=0;
        while( i<ans.size() && ans[i]=='0'){
                i++;
        }
        if(i==ans.size())
        return "0";
        return ans.substr(i);
     
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends