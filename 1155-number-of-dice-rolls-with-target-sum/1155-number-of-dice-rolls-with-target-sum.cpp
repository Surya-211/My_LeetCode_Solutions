class Solution {
public:
       int numRollsToTarget(int n, int k, int target) {
        if (n * k < target) return 0;
        long dp[31][1001] = {0};
        dp[0][0] = 1;
        int mod = 1e9 +7;
        for (int i = 1; i <= n; i++) {
            for (int t = 1; t <= target; t++) {
                for (int j = 1; j <= k; j++) {
                    if (t < j) break;
                    dp[i][t] += dp[i - 1][t - j];
                    dp[i][t] %= mod;
                }
            }
        }
        return dp[n][target];
    }

};