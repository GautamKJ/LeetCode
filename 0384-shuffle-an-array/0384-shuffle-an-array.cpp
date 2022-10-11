class Solution {
public:
    vector<int>temp;
    vector<int>org;
    Solution(vector<int>& nums) {
        temp=nums;
        org=temp;
    }
    
    vector<int> reset() {
        // temp=org;
        return org;
    }
    
    vector<int> shuffle() {
        int n=temp.size();
        int r1=rand()%n;
        int r2=rand()%n;
        // cout<<r1<<"     "<<r2<<endl;
        if(n>1)
        swap(temp[r1],temp[r2]);
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */