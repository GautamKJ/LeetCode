//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        
        int num=0;
        int neg=1;
        int flag=false;
        int cnt=0;
        for(int i=0;i<str.size();i++)
            {
                
                if(str[i]-'0'>9)
                    return -1;
                 if(str[i]-'0'>9 || str[i]-'0'<0)
                    {cnt++;
                    if(flag)
                        return -1;
                    }
                    
                if(cnt>1 )
                return -1;
                if(str[i]=='-')
                    neg=-1;
               
                else{
                int n=str[i]-'0';
                flag=true;
                num= num*10+n;
                }
                
                
            }
            return neg*num;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends