//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool static compare(vector<int>a,vector<int> b){
        return a[0]<b[0];
        
    }
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         
         vector<vector<int>>ans;
        
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),compare);
        vector<int>temp;
        temp.push_back(intervals[0][0]);
        temp.push_back(intervals[0][1]);
        
        int end=intervals[0][1];
        int start;
        for(int i=1;i<n;i++){
            start=intervals[i][0];
            if(end>=start)
            {
                end=max(intervals[i][1],temp[1]);
                temp.pop_back();
                temp.push_back(end);
                
            }
            else{
                ans.push_back(temp);
                temp.clear();
                temp.push_back(intervals[i][0]);
                temp.push_back(intervals[i][1]);
        
                end=intervals[i][1];
            }
            
        }
        ans.push_back(temp);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends