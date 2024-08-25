class Solution {
public:
    int countPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            string s1=to_string(nums[i]);
            for(int j=i+1;j<nums.size();j++)
            {
                string s2=to_string(nums[j]);
                int n=s1.size();
                int m=s2.size();
                int s=max(n,m);
                while(n<s)
                {
                    s1='0'+s1;
                    n++;
                }
                while(m<s)
                {
                    s2='0'+s2;
                    m++;
                }
                int c=0;
                int ind1=-1;
                int ind2=-1;
                for(int k=0;k<s1.size();k++)
                {
                    if(s1[k]!=s2[k])
                    {
                        c++;
                        if(ind1==-1)
                            ind1=k;
                        else
                            ind2=k;
                    }
                }
                if(c==0)
                    count++;
                if(c==2)
                {
                    if(s1[ind1]==s2[ind2] && s1[ind2]==s2[ind1])
                        count++;
                }
            }
        }
        return count;
    }
};