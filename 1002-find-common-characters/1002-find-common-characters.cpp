class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> answer;
        int n = words.size();
        unordered_map<char, int> m;

        for (char c : words[0]) {
            m[c]++;
        }

        for (int i = 1; i < n; i++) {
            unordered_map<char, int> temp;
            for (char c : words[i]) {
                if (m[c] > 0) {
                    temp[c]++;
                    m[c]--;
                }
            }
            m = temp;
        }

        for (auto c : m) {
            for (int i = 0; i < c.second; i++) {
                answer.push_back(string(1, c.first));
            }
        }
        return answer;
    }
};