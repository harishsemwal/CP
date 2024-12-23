class Solution {  
public:  
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {  
        /*
        
        Time - O(m + n)
        Space - O(m + n)

        */
        int n = nums1.size();  
        int m = nums2.size();  
        
        vector<int> merged(n + m);  
        int i = 0, j = 0, k = 0;  

        while (i < n && j < m) {  
            if (nums1[i] < nums2[j]) {  
                merged[k++] = nums1[i++];  
            } else {  
                merged[k++] = nums2[j++];  
            }  
        }  
        while (i < n) {  
            merged[k++] = nums1[i++];  
        }  
        while (j < m) {  
            merged[k++] = nums2[j++];  
        }  

        int len = n + m;  
        if (len % 2 == 0) {  
            return (merged[len / 2 - 1] + merged[len / 2]) / 2.0;  
        } else {  
            return merged[len / 2];  
        }  
    }  
};