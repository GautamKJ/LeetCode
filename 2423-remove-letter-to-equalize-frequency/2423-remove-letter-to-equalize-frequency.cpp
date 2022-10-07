class Solution {
public:
    bool equalFrequency(string word) {
        
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<word.size();i++)
        {
            mp[word[i]]++;
        }
        
        char maxch,minch;
        int maxi=INT_MIN,mini=INT_MAX;
        for(auto x:mp){
            if(x.second>=maxi){
                maxi=x.second;
                maxch=x.first;
            }
             if(x.second<mini){
                mini=x.second;
                minch=x.first;
            }
        }
        
        mp[maxch]--;
        int freq=mp[minch];
        int flag=0;
        cout<<freq<<"  "<<maxch<<endl;
        for(auto x:mp){
            if(x.second>=1 && x.second!=freq)
                flag=1;
        }
        if(flag==0)
            return true;
        mp[maxch]++;
        mp[minch]--;
         freq=mp[maxch];
          cout<<freq<<"  "<<minch<<endl;
        for(auto x:mp){
          if(x.second>=1 && x.second!=freq)
                flag=2;
        }
        if(flag==2)
            return false;
        return true;
        
    }
};