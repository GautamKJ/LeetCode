class LUPrefix {
public:
   map<int,int>arr;
    int len;
    int a =0;
    int x =0; 
    LUPrefix(int n) {
        len=n;
    }
    
    void upload(int video) {
        arr[video]++;

            while(arr[x+1]>0)x++;
            a = x ;
        
        
    }
    
    int longest() {
        int  ans=0;
       
        
        return a;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */