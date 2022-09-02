class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        vector<char>alpha1(256,' ');
        vector<char>alpha2(256,' ');
        for(int i=0;i<s.length();i++){
            if(alpha1[s[i]]==' '&&alpha2[t[i]]==' ')
            {alpha1[s[i]]=t[i];
             alpha2[t[i]]=s[i];
            }
            else 
                if(alpha1[s[i]]!=t[i] &&  alpha2[t[i]]!=s[i])
                    return false;
        }
        return true;
        
    }
};