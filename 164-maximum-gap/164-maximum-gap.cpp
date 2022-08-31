class Solution {
public:
    void count_sort(vector<int>&arr,int n,int exp){
        int output[n];
        int count[10]={0};
        
        for(int i=0;i<n;i++){
            count[(arr[i]/exp)%10]++;
        }
        
        for(int i=1;i<10;i++){
            count[i]+=count[i-1];
        }
        
      for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
        
        for(int i=0;i<n;i++){
             arr[i] = output[i];
        }
    }
    int getMax(vector<int>&nums,int n){
        
        int ma=INT_MIN;
        for(int i=0;i<n;i++){
            ma=max(nums[i],ma);
        }
        return ma;
    }
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)
            return 0;
        int n=nums.size();
        int m=getMax(nums,n);
        for(int exp=1;m/exp>0;exp*=10){
            count_sort(nums,n,exp);
        }
        for(int x:nums){
            cout<<x<<"  ";
        }
        int ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,nums[i]-nums[i-1]);
        }
        return ans;
    }
};