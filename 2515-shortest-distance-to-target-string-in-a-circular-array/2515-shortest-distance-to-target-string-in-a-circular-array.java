class Solution {
    public int closetTarget(String[] words, String target, int startIndex) {
        int less=Integer.MAX_VALUE;
        int n=words.length;
        int i=startIndex;
        if(words[startIndex].equals(target))
            return 0;
        int count=0;
        int j=(i+1)%n;
        while(j!=i)
        {
            count++;
            if(words[j].equals(target))
            {
                break;
            }
            j=(j+1)%n;
        }
        if(i==j)
            return -1;
        if(count<less)
            less=count;

        i=startIndex;
        j=(i-1+n)%n;
        count=0;
        while(j!=i)
        {
            count++;
            if(words[j].equals(target))
            {
                break;
            }
            
            j=(j-1+n)%n;
        }   
        if(count<less)
            less=count;
        
        return less;
        
    }
}