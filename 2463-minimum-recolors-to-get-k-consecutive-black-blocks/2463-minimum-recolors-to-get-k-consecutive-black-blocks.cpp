class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int w = 0;
        for(int i=0; i<k; i++) {
            if(blocks[i] == 'W') {
                w++;
            }
        }
        int res = w;
        for(int i=k; i<blocks.size(); i++) {
            if(blocks[i] == 'W') {
                w++;
            }
            if(blocks[i-k] == 'W') {
                w--;
            }
            res = min(res, w);
        }
        return res;
    }
};