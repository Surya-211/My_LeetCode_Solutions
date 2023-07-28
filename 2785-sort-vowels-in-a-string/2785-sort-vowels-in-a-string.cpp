class Solution {
public:
    static bool comparator(char c1,char c2)
    {
        if(c1<c2)
            return true;
        else
            return false;
    }
    string sortVowels(string s) {
        string vowel="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];                                                if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowel+=ch;
        }
        sort(vowel.begin(),vowel.end(),comparator);
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];                                                if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                s[i]=vowel[k];
                k++;
            }
        }
        return s;
    }
};