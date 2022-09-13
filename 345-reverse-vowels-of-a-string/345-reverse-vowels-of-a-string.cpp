class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        int ptr1=0,ptr2=n-1;
       
       
        
        while(ptr1<ptr2){
            
            if(s[ptr1]!='a'&& s[ptr1]!='e'&&s[ptr1]!='i'&&s[ptr1]!='o'&&s[ptr1]!='u' && s[ptr1]!='A'&& s[ptr1]!='E'&&s[ptr1]!='I'&&s[ptr1]!='O'&&s[ptr1]!='U' )
                ptr1++;
            else if(s[ptr2]!='a'&& s[ptr2]!='e'&&s[ptr2]!='i'&&s[ptr2]!='o'&&s[ptr2]!='u' && s[ptr2]!='A'&& s[ptr2]!='E'&&s[ptr2]!='I'&&s[ptr2]!='O'&&s[ptr2]!='U')
                ptr2--;
            else{
                swap(s[ptr1],s[ptr2]);
                ptr1++;
                ptr2--;
            }
            
            
        }
        return s;
    }
};