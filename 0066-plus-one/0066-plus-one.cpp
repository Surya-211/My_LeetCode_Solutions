class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        digits[i]=digits[i]+1;
        while(i>=0)
        {
            if(digits[i]!=10)
                break;
            else
            {
                if(i==0)
                {
                    digits[i]=0;
                    reverse(digits.begin(),digits.end());
                    digits.push_back(1);
                    reverse(digits.begin(),digits.end());
                }
                else
                {
                    digits[i]=0;
                    digits[i-1]=digits[i-1]+1;   
                }
            }
            i--;
        }
        return digits;
    }
};