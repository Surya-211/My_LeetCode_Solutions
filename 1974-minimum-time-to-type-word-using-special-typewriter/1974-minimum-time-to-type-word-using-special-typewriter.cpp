class Solution {
public:
    int minTimeToType(string word) {
        
        int count=0;
        char c='a';
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            int n=c-'a';
            int m=ch-'a';
            int maxi=max(m,n);
            int mini=min(m,n);
            int dist=maxi-mini;
            int d=min(dist,26-dist);
            count+=d+1;
            c=ch;
        }
        return count;
    }
};