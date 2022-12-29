//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    string res;
    
  void  solve(int index,int n,string str,int k){
        
        if(index==n || k==0){
        
            if(res<str){
                res=str;
            }
            return;
                
        }
        
        for(int i=index+1;i<n ;i++){
            
            if(str[index]<str[i])
                {
                    swap(str[index],str[i]);
                    
                    solve(index+1,n,str,k-1);
                    swap(str[index],str[i]);
                }
            
        }
        solve(index+1,n,str,k);
    }
    
    string findMaximumNum(string str, int k)
    {
        res=str;
       solve(0,str.size(),str,k);
       
       return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}

// } Driver Code Ends