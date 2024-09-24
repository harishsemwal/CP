class TrieNode {
public:
    TrieNode() {
        children = vector<TrieNode*>(10, nullptr);
        isEnd = false;
    }
    vector<TrieNode*> children;
    bool isEnd;
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }
    void insert(int num) {
        TrieNode* node = root;
        string str_num = to_string(num);

        for (size_t i = 0; i < str_num.length(); ++i) {
            int digit = str_num[i] - '0';
            if (node->children[digit] == nullptr) {
                node->children[digit] = new TrieNode();
            }
            node = node->children[digit];
        }
        node->isEnd = true;
    }
    int longestCommonPrefixLength(int num) {
        TrieNode* node = root;
        string str_num = to_string(num);
        int len_num = 0;

        for (size_t i = 0; i < str_num.length(); ++i) {
            int digit = str_num[i] - '0';
            if (node->children[digit] == nullptr) {
                return len_num;
            }
            node = node->children[digit];
            len_num++;
        }

        return len_num;
    }
private:
    TrieNode* root;
};

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie trie;
        int maxLen = 0;

        for (int num : arr1) {
            trie.insert(num);
        }

        for (int num : arr2) {
            maxLen = max(maxLen, trie.longestCommonPrefixLength(num));
        }

        return maxLen;
    }
};
