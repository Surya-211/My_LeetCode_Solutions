class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        char c=coordinates[0];
        char n=coordinates[1];
        
        int num=n-48;
        if(num%2==0)
        {
            if(c=='a'||c=='c'||c=='e'||c=='g')
                return true;
            else
                return false;
        }
        else
        {
            if(c=='a'||c=='c'||c=='e'||c=='g')
                return false;
            else
                return true;
        }
    }
};