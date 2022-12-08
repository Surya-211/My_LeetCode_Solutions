class Solution {
public:
    int minOperations(int n) {
        int max=(2*n)-1;
        int count=0;
        while(max>n)
        {
            count+=max-n;
            max=max-2;
        }
        return count;
    }
};