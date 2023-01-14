class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length())
            return false;
        
        boolean ana=true;
        
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            int ind=t.indexOf(ch);
            if(ind==-1)
            {
                ana=false;
                break;
            }
            else
                t=t.substring(0,ind)+t.substring(ind+1);
        }
        if(ana==true)
            return true;
        else
            return false;
    }
}