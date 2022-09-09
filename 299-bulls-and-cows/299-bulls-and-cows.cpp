class Solution {
public:
    string getHint(string secret, string guess) {
        
        int n=secret.size();
        unordered_map<char,int>mp;
        set<int>index;
        int bull=0,cow=0;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i])
            {bull++;
             index.insert(i);
            }
            else
            mp[secret[i]]++;                
        }
        
         for(int i=0;i<n;i++){
            if(mp[guess[i]]>0 && index.find(i)==index.end())
            {
                cow++;
                mp[guess[i]]--;
            }
                      
        }
        
        return to_string(bull)+"A"+to_string(cow)+"B";
        
        
    }
};