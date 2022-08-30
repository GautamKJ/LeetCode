class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int res=0;
        int power=0;
        int temp=0;
        cout<<2*pow(26,1);
        for(int i=n-1;i>=0;i--){
            temp=(columnTitle[i]-'A')+1;
            temp=temp*pow(26,power);
            res+=temp;
            
            power++;
        }
        return res;
    }
};