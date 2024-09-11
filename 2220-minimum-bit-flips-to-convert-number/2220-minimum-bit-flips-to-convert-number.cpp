class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n=start^goal;
        return __builtin_popcount(n);
    }
};