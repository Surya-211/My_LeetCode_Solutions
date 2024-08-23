class Solution {
public:
    int gcd(int a,int b)
    {
        if(a==0)
            return b;
        return gcd(b%a,a);
    }
    string fractionAddition(string expression) {
        int num=0;
        int deno=1;
        int pos=1;
        int i=0;
        while(i<expression.size())
        {
            if(expression[i]=='-' || expression[i]=='+')
            {
                if(expression[i]=='-')
                    pos=-1;
                else
                    pos=1;
                i++;
            }
            int cnum=0;
            int cdeno=0;
            while(isdigit(expression[i]))
            {
                cnum=cnum*10+(expression[i]-'0');
                i++;
            }
            cnum*=pos;
            i++;
            while(isdigit(expression[i]))
            {
                cdeno=cdeno*10+(expression[i]-'0');
                i++;
            }
            num=num*cdeno+cnum*deno;
            deno=deno*cdeno;
        }
        int g=abs(gcd(num,deno));
        num/=g;
        deno/=g;
        return to_string(num)+"/"+to_string(deno);
    }
};