class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0){
            return false;
        }
        double t = log2(n);
        if(floor(t) == t){
            return true;
        }
        else{
            return false;
        }
    } 
};