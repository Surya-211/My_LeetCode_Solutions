class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        char c=letters[0];
        for(int i=0;i<letters.size();i++)
        {
            char ch=letters[i];
            if(target<ch)
            {
                c=ch;
                break;
            }
        }
        return c;
    }
};