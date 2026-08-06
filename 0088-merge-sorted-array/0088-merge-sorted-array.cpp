class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // vector<int> ans;

        int k = m - 1, q = n - 1, z = m + n - 1;
        while(k >= 0 && q >= 0) {
           if (nums1[k] > nums2[q]) {
                nums1[z--] = nums1[k--];
            } else {
                nums1[z--] = nums2[q--];
            }
        }
        
        
        while (q >= 0) {
            nums1[z--] = nums2[q--];
        }
    }
};