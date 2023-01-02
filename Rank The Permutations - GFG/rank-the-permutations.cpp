//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
    
    long long factorail(int n){
        if(n<=1 )
        return 1;
        return n*factorail(n-1);
    }
    
    long long rank(string &str,string org, int k){
        
         int n=str.size();
      
        // cout<<"Str "<<str<<endl;
        int i=k;
        while(i<str.size() && str[i]!=org[k]){
            i++;
        }
        // cout<<"i "<<i<<"    "<<k</<endl;
        swap(str[i],str[k]);
        
        return (i-k)*factorail(n-1-k);
    }
    
    long long findRank(string str) {
        
        long long count=1;
        int n=str.size();
        if(n==1)
        return 1;
          string org=str;;
          
          int i=0;
            sort(str.begin(), str.end());
        while(str!=org && i<n)
        {
          
        //   cout<<"Str "<<str<<endl;
            count+=rank(str,org,i);
            i++;
            if(i<n)
            sort(str.begin()+i, str.end());
            
            
              
        }
        
        return count;
        
       
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends