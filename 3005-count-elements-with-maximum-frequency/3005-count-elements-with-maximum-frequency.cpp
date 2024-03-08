class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> frequencyMap;
    for (int num : nums) {
        frequencyMap[num]++;
    }

    int maxFrequency = 0;
    for (const auto& entry : frequencyMap) {
        maxFrequency = max(maxFrequency, entry.second);
    }

    int totalCount = 0;
    for (const auto& entry : frequencyMap) {
        if (entry.second == maxFrequency) {
            totalCount += maxFrequency;
        }
    }

    return totalCount;
}
};