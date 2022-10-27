class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
            int k=nums.size();
        
            vector<pair<int,int>>a;
        
            for(int i=0;i<k;i++){
                for(int x: nums[i])
                    a.push_back({x,i});
            }
        sort(a.begin(),a.end());
        int mini=INT_MAX;
        unordered_map<int,int>mp;
        vector<int>ans;
        int cnt=0;
        
        int i=0,j=0;
        
        for(i=0;i<a.size();i++){
            
            mp[a[i].second]++;
            if(mp[a[i].second]==1)cnt++;
            
            if(cnt==k){
                // cout<<"cnt "<<cnt<<endl;
                if(a[i].first-a[j].first+1<mini){
                    mini=a[i].first-a[j].first+1;
                  ans={a[i].first,a[j].first};
                }
                while(cnt==k){
                    
                    if(mp[a[j].second]>1)
                        mp[a[j].second]--;
                    
                    else 
                        break;
                    j++;
                        
                }
                
                 if(a[i].first-a[j].first+1<mini){
                    mini=a[i].first-a[j].first+1;
                   ans={a[i].first,a[j].first};
                }
            }
            
        }
        return ans;
        
        
    }
};