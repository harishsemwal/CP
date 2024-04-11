#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        int i = 0;
        while (k > 0 && i < n - 1) {
            if (num[i] > num[i + 1]) {
                num.erase(i, 1);
                k--;
                if (i > 0) {
                    i--;
                }
            } else {
                i++;
            }
        }
  
        while (k > 0 && !num.empty()) {
            num.pop_back();
            k--;
        }
      
        size_t leadingZeros = 0;
        while (leadingZeros < num.size() && num[leadingZeros] == '0') {
            leadingZeros++;
        }
        num.erase(0, leadingZeros);
        return num.empty() ? "0" : num;
    }
};
