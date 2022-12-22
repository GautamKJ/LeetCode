//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    
    int buy=0,sell=1;
    int profit=0;
    for(int i=1;i<n;i++){
        // cout<<i<<"      "<<price[buy]<<"    "<<price[sell]<<endl;
         if(sell<n && buy<sell && price[i]<price[sell] && price[buy]<price[sell]){
            cout<<"("<<buy<<" "<<sell<<")"<<" ";
            buy=i;
            sell=i;
            profit=1;
        }
        
        if(price[buy]>price[i])
        {
            buy=i;
            sell=i;
        }
        
          if(price[i]>price[sell])
            {
                sell=i;
            }
        
    }
      if( sell ==n-1 && buy<sell && price[buy]<price[sell]){
            cout<<"("<<buy<<" "<<sell<<")"<<" ";
        profit=1;
        }
        if(profit==0)
        cout<<"No Profit";
    cout<<endl;
}