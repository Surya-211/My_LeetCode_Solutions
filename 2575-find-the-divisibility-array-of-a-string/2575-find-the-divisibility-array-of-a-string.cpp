class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        
        vector<int>v;
        long long rem=0;
        for(int i=0;i<word.size();i++)
        {
            int dig=word[i]-'0';
            long long n=rem*10+dig;
            if(n%m==0)
                v.push_back(1);
            else
                v.push_back(0);
            
            rem=n%m;
        }
        return v;
    }
};