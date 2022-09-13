class SummaryRanges {
public:
    map<int,int>mp;
    SummaryRanges() {
        
    }
    
    void addNum(int val) {
        map<int,int>:: iterator it=mp.lower_bound(val);
     
         if(it==mp.begin()){
             if(it->first==val+1){
                 int last=it->second;
                 mp.erase(it);
                 mp[val]=last;
             }
            
             else if(it->first!=val){
                 mp[val]=val;
             }
             
         }
        else if(it==mp.end())
        {
            if(mp.empty())
                mp[val]=val;
            else {
                if(mp.rbegin()->second==val-1){
                    mp.rbegin()->second=val;
                }
                else if(mp.rbegin()->second<val){
                     mp[val]   =val;
                }
            }
        }
        else{
            if(val+1==it->first && val-1==(prev(it))->second)
            {prev(it)->second=it->second;
                mp.erase(it);}
            else if(it->first==val+1){
                 int last=it->second;
                 mp.erase(it);
                 mp[val]=last;
             }
             else if( prev(it)->second==val-1){
                prev(it)->second=val;
             }
            else if(it->first!=val && prev(it)->second<val )
                mp[val]=val;
        }
        
          
        
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>temp;
        
        for(auto x:mp){
            temp.push_back({x.first,x.second});
        }
        return temp;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */