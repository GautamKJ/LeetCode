class Solution {
public:
    int checkSum(string sum,string num){
        
        cout<<sum<<" --- "<<num<<endl;
        int k=0;
        while(k<sum.size()){
            if(sum[k]!=num[k])
                return -1;
            k++;
        }
        cout<<"k "<<k<<endl;
        return k;
        
    }
    bool solve(string num,string prev,string curr,long long int sum){
        if(num.size()==0)
        {
            cout<<"sunm "<<sum<<endl;
                return false;
            
        }
         int k;
        
        if(prev!="")
       k=checkSum(to_string(sum),num);
       
            
        if( (prev!="")&& k!=-1 ){
            prev=curr;
            curr=to_string(sum);
            
            cout<<"here  "<<prev<<"  "<<curr<<"========="<<num.substr(k).size()<<endl;
            if(num.substr(k).size()==0)
                return true;
            if(solve(num.substr(k),prev,curr,stol(prev)+stol(curr)))
                return true;
            return false;
        }
        else if( (prev!="")&& k==-1)
            return false;
        for(int i=0;i<num.size()-1;i++){
           
            for(int j=1;j<num.size()-i;j++){
                prev=num.substr(0,i+1);
                curr=num.substr(i+1,j);
                
                if((prev.size()>1 && prev[0]=='0') || (curr.size()>1 &&curr[0]=='0'))
                    break;
                
                cout<<prev<<"  "<<curr<<"   ***-- "<<endl;
                if(solve(num.substr(i+j+1),prev,curr,stol(prev)+stol(curr)))
                    return true;
                
            }
           
        }
        return false;
        
    }
    bool isAdditiveNumber(string num) {
        
        return  solve(num,"","",0);
    }
};