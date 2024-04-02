class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int maxi=0;
        int count=0;
        int left=0;
        //checking for max consecutive T
        for(int i=0;i<answerKey.size();i++)
        {
            if(answerKey[i]=='F')
                count++;
            while(count>k)
            {
                if(answerKey[left]=='F')
                    count--;
                left++;
            }
            maxi=max(maxi,i-left+1);
        }
        count=0;
        left=0;
        //checking for max consecutive F
        for(int i=0;i<answerKey.size();i++)
        {
            if(answerKey[i]=='T')
                count++;
            while(count>k)
            {
                if(answerKey[left]=='T')
                    count--;
                left++;
            }
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};