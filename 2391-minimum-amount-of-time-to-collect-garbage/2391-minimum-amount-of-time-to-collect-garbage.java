class Solution {
    public int garbageCollection(String[] garbage, int[] travel) {
        int total=0;
        int m=-1;
        int p=-1;
        int g=-1;
        for(int i=0;i<garbage.length;i++)
        {
            String str=garbage[i];
            total+=str.length();
            for(int j=0;j<str.length();j++)
            {
                char ch=str.charAt(j);
                if(ch=='M')
                    m=i;
                else if(ch=='G')
                    g=i;
                else
                    p=i;
            }
        }
        for(int i=0;i<travel.length;i++)
        {
            if(i<m)
                total+=travel[i];
            if(i<g)
                total+=travel[i];
            if(i<p)
                total+=travel[i];
        }
        return total;
            
    }
}