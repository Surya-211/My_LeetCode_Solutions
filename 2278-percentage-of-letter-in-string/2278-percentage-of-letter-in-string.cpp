class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch==letter)
                count++;
        }
        int n=s.size();
        int per=count*100/n;
        return per;
    }
};