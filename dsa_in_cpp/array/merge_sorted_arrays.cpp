// Time Complexity: O(m + n)
// Space Complexity: O(1)
// approach: Two Pointer from the end since nums1 has enough space to hold elements of nums2


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[idx] = nums1[i];
                idx--;
                i--;
            } else {
                nums1[idx] = nums2[j];
                idx--;
                j--;
            }
        }

    }
};