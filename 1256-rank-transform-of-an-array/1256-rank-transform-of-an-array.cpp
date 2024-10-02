class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());

        unordered_map<int, int> rankMap;
        int rank = 1;

        for (const int& num : sortedArr) {
            if (rankMap.find(num) == rankMap.end()) {
                rankMap[num] = rank++;
            }
        }

        vector<int> ans;
        for (const int& num : arr) {
            ans.push_back(rankMap[num]);
        }

        return ans;

    }
};