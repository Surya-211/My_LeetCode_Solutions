class Solution {
public:
    int maxVowels(string s, int k) {
        
        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                count++;
        }
        maxi=max(count,maxi);
        int j=0;
        for(int i=k;i<s.size();i++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                count--;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                count++;
            maxi=max(count,maxi);
            j++;
        }
        return maxi;
    }
};