class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        vector<int> v;
        while(i<n&&j<m){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i++]);
            }
            else
                v.push_back(nums2[j++]);
        }
        while(i<n){
            v.push_back(nums1[i++]);
        }
        while(j<m){
            v.push_back(nums2[j++]);
        }
        double mid;
        int c=v.size()/2;
        if(v.size()%2==0){
            mid=(float)(v[c-1]+v[c])/2;
        }
        else{
            mid=v[c];
        }
        return mid;
    }
};
