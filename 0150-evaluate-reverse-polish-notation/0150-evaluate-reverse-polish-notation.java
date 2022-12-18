class Solution {
    public int evalRPN(String[] tokens) {
        Stack<String>s=new Stack<>();
        int res=0;
        for(int i=0;i<tokens.length;i++)
        {
            String str=tokens[i];
            if(str.equals("+")||str.equals("-")||str.equals("*")||str.equals("/"))
            {
                String s2=s.peek();
                s.pop();
                String s1=s.peek();
                s.pop();
                int num2=Integer.valueOf(s2);
                int num1=Integer.valueOf(s1);
                if(str.equals("+"))
                    res=num1+num2;
                else if(str.equals("-"))
                    res=num1-num2;
                else if(str.equals("*"))
                    res=num1*num2;
                else if(str.equals("/"))
                    res=num1/num2;
                
                s.push(Integer.toString(res));
                
            }
            else
            s.push(str);
        }
        return (Integer.valueOf(s.peek()));
    }
}