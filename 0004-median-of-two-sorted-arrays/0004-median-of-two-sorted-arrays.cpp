class Solution {  
public:  
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) { 

        /*

        Time - O(m + n)
        Space - O(m + n)

        */
        
        /*

        int n = nums1.size();  
        int m = nums2.size(); 
        vector<int> merged; 
        for(int i = 0; i < n; i++){
            merged.push_back(nums1[i]);
        } 
        for(int i = 0; i < m; i++){
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(), merged.end());
        int len = merged.size();
        if(len%2 == 0){
            return (merged[(len/2)-1] + merged[len/2])/2.0;
        }
        else{
            return merged[len/2];
        }

        */



        /*

        Time - O(m + n)
        Space - O(m + n)

        */

        /*
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

        */


        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        int m1 = 0, m2 = 0;

        for(int count = 0; count <= (m + n)/2; count++){
            m2 = m1;
            if(i != n && j != m){
                if(nums1[i] > nums2[j]){
                    m1 = nums2[j++];
                }
                else{
                    m1 = nums1[i++];
                }
            }
            else if(i < n){
                m1 = nums1[i++];
            }
            else{
                m1 = nums2[j++];
            }
        }

        if((n+m)%2 == 1){
            return (double)(m1);
        }else{
            return (m1 + m2)/2.0;
        }
    }  
};