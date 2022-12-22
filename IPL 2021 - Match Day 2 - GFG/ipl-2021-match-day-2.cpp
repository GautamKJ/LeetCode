//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
  
            vector<int>ans;
            list<int>lst;
    int j=0;
    for(int i=0;i<n;i++)
    {
        while(!lst.empty() && lst.back()<arr[i])
                  lst.pop_back();
           
        if(lst.empty() || lst.back()>=arr[i])
            lst.push_back(arr[i]);
        
        
        if(i-j+1==k){
            if(!lst.empty())
            ans.push_back(lst.front());
            if(!lst.empty() && lst.front()==arr[j])
                lst.pop_front();
            j++;
        }
        
    }
    return ans;
        
            
  
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends