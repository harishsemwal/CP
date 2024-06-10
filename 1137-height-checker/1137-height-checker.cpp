class Solution {
public:
    int heightChecker(vector<int>& h) {
        int n = h.size();
        int e[n],count=0;
        for(int i=0;i<n;i++){e[i]=h[i];}
        sort(h.begin(),h.end());
        for(int i=0;i<n;i++){if(h[i]!=e[i]){count++;}}
        return count;
    }
};