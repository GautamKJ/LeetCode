//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        
        unordered_map<char,int>freq;
        
        int arr[26]={0};
        
        int i=0;
        int j=0;
        int ans=INT_MIN;
        while(i<S.size()){
            
            if((arr[S[i]-'a'])==1)
                {
                    // cout<<S[i]<<"   "<<arr[S[i]-'a']<<"    "<<i<<"  "<<j<<endl;
                    // cout<<i<<"  "<<j<<endl;
                    ans=max(ans,(i-j));
                    
                    
                    while(S[j]!=S[i]){
                        
                       arr[S[j]-'a']--;
                        j++;
                    }
                    
                        
                        arr[S[j]-'a']--;
                        j++;
                    
                }
           
            arr[S[i]-'a']++;
            i++;
        }
         ans=max(ans,(i-j));
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends