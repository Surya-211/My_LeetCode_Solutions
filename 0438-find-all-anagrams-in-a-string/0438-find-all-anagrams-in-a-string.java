class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> l=new ArrayList<Integer>();
        char temp[]=p.toCharArray();
        Arrays.sort(temp);
        p=new String(temp);
        int size=p.length();
        for(int i=0;i<=s.length()-size;i++)
        {
            String nstr=s.substring(i,i+size);
            char t[]=nstr.toCharArray();
            Arrays.sort(t);
            nstr=new String(t);
            if(nstr.equals(p))
                l.add(i);
        }
        return l;
    }
}