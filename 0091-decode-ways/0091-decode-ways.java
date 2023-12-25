class Solution {
     public int numDecodings(String s) {
        char lastDigit = s.charAt(0);
        if (lastDigit == '0') return 0;
        int independentCount = 1, totalNum = 1;
        for (int i = 1; i < s.length(); i++) {
            char digit = s.charAt(i);
            int tempIndependentCount = digit == '0' ? 0 : totalNum, tempTotalNum = tempIndependentCount;
            if (lastDigit > '0' && lastDigit <= '2' && (lastDigit != '2' || digit <= '6')) {
                tempTotalNum += independentCount;
            }
            lastDigit = digit;
            totalNum = tempTotalNum;
            independentCount = tempIndependentCount;
            if (totalNum == 0) return 0;
        }
        return totalNum;
    }
}