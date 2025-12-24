class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> num3;
        
        // Merge nums1
        for (int x : nums1)
            num3.push_back(x);

        // Merge nums2
        for (int x : nums2)
            num3.push_back(x);

        // Sort merged array
        sort(num3.begin(), num3.end());

        int n = num3.size();

        // If even number of elements
        if (n % 2 == 0) {
            return (num3[n/2] + num3[n/2 - 1]) / 2.0;
        } 
        else {
            return num3[n/2];
        }
    }
};

