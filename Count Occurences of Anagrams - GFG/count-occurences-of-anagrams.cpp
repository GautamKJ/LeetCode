//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    
	    unordered_map<char,int>mpat;
	    unordered_map<char,int>temp;
	    
	    for(int i=0;i<pat.size();i++){
	        mpat[pat[i]]++;
	        temp[pat[i]]++;
	    }
	    
	    int i=0,j=0;
	    int ans=0;
	    int c=pat.size();
	    while(i<txt.size() && j<txt.size()){
	        
	        if(mpat.find(txt[j])!=mpat.end()){
	           
	        
	        if(mpat[txt[j]]>0)
	        {
	            c--;
	        }
	         mpat[txt[j]]--;
	       //  cout<<txt[j]<<endl;
	            
	        }
	        if((j-i)+1==pat.size()){
	            if(c==0)
	            {
	                ans++;
	            }
	            if(mpat.find(txt[i])!=mpat.end())
	            {   
	               // cout<<txt[i]<<" ---"<<endl;
	                mpat[txt[i]]++;
	                
	                if(mpat[txt[i]]>0)
	                    c++;
	            }
	                
	            
	                i++;
	                
	        }
	        j++;
	        
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends