class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int ptr1=0,ptr2=0;
        vector<int>res;
        
        while(ptr1<nums1.size() && ptr2<nums2.size()){
            
            if(nums1[ptr1]==nums2[ptr2]){
                res.push_back(nums1[ptr1]);
                int temp=nums1[ptr1];
                ptr1++;
                ptr2++;
                
                while(ptr1<nums1.size() && nums1[ptr1]==temp)
                    ptr1++;
                while( ptr2<nums2.size() &&nums2[ptr2]==temp)
                    ptr2++;
            }
            else if(nums1[ptr1]>nums2[ptr2])
                ptr2++;
            else
                ptr1++;
            
        }
        return res;
    }
};