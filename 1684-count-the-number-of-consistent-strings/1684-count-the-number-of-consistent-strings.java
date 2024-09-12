class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        
        int count=0;
        for(int i=0;i<words.length;i++)
        {
            String word=words[i];
            boolean found=true;
            for(int j=0;j<word.length();j++)
            {
                char ch=word.charAt(j);
                if(allowed.indexOf(ch)==-1)
                {
                    found=false;
                    break;
                }
            }
            if(found==true)
                count++;
        }
        return count;
    }
}