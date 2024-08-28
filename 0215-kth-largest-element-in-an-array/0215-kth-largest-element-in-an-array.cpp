class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> minHeap;

    for(int i = 0; i < nums.size(); i++)
    {
        minHeap.push(nums[i]);
    }

    while(--k)
    {
        minHeap.pop();
    }
    
    return minHeap.top();
    }
};