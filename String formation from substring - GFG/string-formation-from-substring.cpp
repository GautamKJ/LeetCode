//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isRepeat(string s)
	{
	   int n=s.size();
	   // unordered_map<char,int>mp;
	    
	   // for(int i=0;i<s.size();i++){
	   //     mp[s[i]]++;
	   // }
	    
	   // int cnt=mp[s[0]];
	    
	   // for(int x:mp){
	   //     if(x!=cnt)
	   //         return 0;
	   // }
	    string temp,str;
	    for(int i=0;i<n/2;i++){
	        temp=s.substr(0,i+1);
	        int j;
	        
	        for( j=i+1;j<n;){
	            str=s.substr(j,temp.size());
	           // cout<<str<<" --str   "<<" "<<temp<<endl;
	            if(temp!=str)
	                break;
	               
	               j+=temp.size();
	        }
	        if(j>=n)
	            return 1;
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends