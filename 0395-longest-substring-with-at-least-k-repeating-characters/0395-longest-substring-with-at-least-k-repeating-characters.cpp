class Solution {
public:
    int solve(string s,int k){
        int n=s.length();
        if(n==0 || n<k)
            return 0;
        if(k<=1)
            return n;
        
        unordered_map<char,int>cnt;
        
        for(char c:s)
            cnt[c]++;
        
        int i=0;
      while(i<n && cnt[s[i]]>=k)i++;
        
        if(i==n)
            return i;
        int ls1=solve(s.substr(0,i),k);
        
        while(i<n && cnt[s[i]]<k)i++;
        int ls2=(i<n)?solve(s.substr(i),k):0;
        
        return max(ls1,ls2);
      
    }
    int longestSubstring(string s, int k) {
       
        return solve(s,k);
    }
    
};