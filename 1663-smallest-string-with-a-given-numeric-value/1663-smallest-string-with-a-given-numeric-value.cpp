class Solution {
public:
    string getSmallestString(int n, int k) {
        
        int s=26;
        char ch='z';
        string str="";
        while(n>0)
        {
            int t=k-s;
            if(t>=(n-1))
            {
                str+=ch;
                k-=s;
                n--;
            }
            else
            {
                s--;
                ch--;
            }  
        }
        str=reverse(str);
        return str;
    }
    
    string reverse(string str)
    {
        for(int i=0,j=str.size()-1;i<=j;i++,j--)
        {
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        return str;
    }
};