class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        for(int i=0;i<ransomNote.length();i++)
        {
            char ch=ransomNote.charAt(i);
            int ind=magazine.indexOf(ch);
            if(ind==-1)
                return false;
            else
            {
                magazine=magazine.substring(0,ind)+magazine.substring(ind+1);
            }
        }
        return true;
    }
}