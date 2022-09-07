class Solution {
public:
    bool isFeasible(vector<int>& citations,int target){
        int cnt=0;
      
        for(int i=0;i<citations.size();i++){
          
            if(citations[i]>=target){
                cnt++;
            }
        }
    
        return cnt>=target;
    }
    int hIndex(vector<int>& citations) {
        
        sort(citations.begin(),citations.end());
        int l=0,h=citations.size();
        int ans=0;
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(isFeasible(citations,mid))
            {
                ans=mid;
                cout<<ans<<endl;
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return ans;
    }
};