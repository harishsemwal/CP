#include<bits/stdc++.h>
class Solution {
public:
    long long sumAndMultiply(int n) {
        string str = to_string(n);
        int sum = 0;
        long long number = 0;
        for (char c : str) { if (c >= '1' && c <= '9') { int digit = c - '0';
                sum += digit;
                number = number * 10 + digit;
            }
        }
        return sum * number;
    }
};