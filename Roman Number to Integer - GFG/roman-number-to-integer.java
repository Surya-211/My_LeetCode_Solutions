//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));

        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String roman = br.readLine().trim();
            Solution ob = new Solution();
            System.out.println(ob.romanToDecimal(roman));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    // Finds decimal value of a given roman numeral
    public int romanToDecimal(String s) {
        // code here
        int num=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            char ch1=' ';
            if(i!=s.length()-1)
            {
                 ch1=s.charAt(i+1);
            }
            if(ch=='I')
            {
                if(ch1=='V')
                {
                    num+=4;
                    i++;
                    continue;
                }
                else if(ch1=='X')
                {
                    num+=9;
                    i++;
                    continue;
                }
                else
                    num+=1;  
            }
            else if(ch=='V')
                num+=5;
            else if(ch=='X')
            {
                 if(ch1=='L')
                {
                    num+=40;
                    i++;
                    continue;
                }
                else if(ch1=='C')
                {
                    num+=90;
                    i++;
                    continue;
                }
                else
                    num+=10;
            }
            else if(ch=='L')
                num+=50;
            else if(ch=='C')
            {
                if(ch1=='D')
                {
                    num+=400;
                    i++;
                    continue;
                }
                else if(ch1=='M')
                {
                    num+=900;
                    i++;
                    continue;
                }
                else
                    num+=100;
            }
            else if(ch=='D')
                num+=500;
            else if(ch=='M')
                num+=1000;
        }
        return num;
    }
}