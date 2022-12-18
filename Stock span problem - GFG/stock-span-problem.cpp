//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int>ans;
       stack<int>s;
       vector<int>temp;
       
       temp.push_back(-2);
       s.push(0);
       for(int i=1;i<n;i++){
           
           if(price[s.top()]>price[i])
            temp.push_back(-2);
            
           else if(!s.empty() && price[s.top()]<=price[i]){
               while(!s.empty() && price[s.top()]<=price[i])
                s.pop();
                
                if(s.empty())
                temp.push_back(-1);
                else
                temp.push_back(s.top());
                    
           }
           
           s.push(i);
           
       }
       
       for(int i=0;i<n;i++){
           if(temp[i]==-2)
            ans.push_back(1);
            else
            ans.push_back(i-temp[i]);
       }
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends