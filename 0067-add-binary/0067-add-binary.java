class Solution {
    public String addBinary(String a, String b) {
        if(a.length()>b.length())
            return binary(a,b);
        else
            return binary(b,a);
    }
    String binary(String s1,String s2)
    {
        String str="";
        int i=s1.length()-1;
        int j=s2.length()-1;
        int carry=0;
        while(j>=0)
        {
            char ch1=s1.charAt(i);
            char ch2=s2.charAt(j);
            int num=(ch1-48)+(ch2-48)+carry;
            if(num==0)
            {
                str="0"+str;
                carry=0;
            }
            else if(num==1)
            {
                str="1"+str;
                carry=0;
            }
            else if(num==2)
            {
                str="0"+str;
                carry=1;
            }
            else if(num==3)
            {
                str="1"+str;
                carry=1;
            }
            i--;
            j--;
        }
        while(i>=0)
        {
            char ch1=s1.charAt(i);
            int num=(ch1-48)+carry;
            if(num==0)
            {
                str="0"+str;
                carry=0;
            }
            else if(num==1)
            {
                str="1"+str;
                carry=0;
            }
            else if(num==2)
            {
                str="0"+str;
                carry=1;
            }
            else if(num==3)
            {
                str="1"+str;
                carry=1;
            }
            i--;
        }
        if(carry==1)
            str="1"+str;
        return str;
        
    }
}