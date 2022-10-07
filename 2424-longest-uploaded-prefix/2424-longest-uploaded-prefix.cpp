class LUPrefix {
public:
   int arr[100000]={0};
    int len;
    int a =0;
    int x =0; 
    int  ans;
    LUPrefix(int n) {
        len=n;
        ans=0;
    }
    
    void upload(int video) {
        arr[video-1]=1;
        // for(int i =0;i<len ; i++){
        //     while(arr[x]!=0)x++;
        //     a = x ;
        // }
         for(int i=ans;i<len;i++){
            if(arr[i]==0)
                break;
            ans++;
        }
        
    }
    
    int longest() {
        
                return ans;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */