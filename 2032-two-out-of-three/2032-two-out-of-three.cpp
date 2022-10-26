class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        unordered_map<int,int>mp;
        vector<int>res;
      
        for(int x:nums1)
            mp[x]=1;
        
        for(int i=0;i<nums2.size();i++){
            if( mp.find(nums2[i])!=mp.end())
                mp[nums2[i]]=2;    
        }
      
         for(int x:nums2){
             if(mp.find(x)==mp.end())
                 mp[x]=1;
         }
            
        
        for(int i=0;i<nums3.size();i++){
            if( mp.find(nums3[i])!=mp.end())
                mp[nums3[i]]=3;    
        }
      
         for(int x:nums3){
             if(mp.find(x)==mp.end())
                 mp[x]=1;
         }
            
    
       for(auto i:mp){
           if(i.second>=2)
        res.push_back(i.first);
       }
        cout<<endl;
        return res;
       
    }
};