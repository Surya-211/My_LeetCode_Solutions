class Solution {
public:
   int calc(vector<string> & str, int ind, unordered_map<char, int>& mpp){
        if(ind==str.size())return 0;
        
        int dont=0;
        dont=calc(str,ind+1,mpp);
        int take=0;
        bool flag=true;
        for(auto it:str[ind]){
            if(mpp[it]!=0)flag=false;
            mpp[it]++;
        }
        if(flag)take=str[ind].size()+ calc(str,ind+1,mpp);
        for(auto it:str[ind])mpp[it]--;
        return max(take,dont);
    }
    
    int maxLength(vector<string>& arr) {
        unordered_map<char,int> mpp;
        return calc(arr,0,mpp);
    }
};