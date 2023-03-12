class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int count=0;
        for(int i=0;i<items.size();i++)
        {
            string type=items[i][0];
            string color=items[i][1];
            string name=items[i][2];
            if(ruleKey=="type"&&ruleValue==type)
                count++;
            else if(ruleKey=="color"&&ruleValue==color)
                count++;
            else if(ruleKey=="name"&&ruleValue==name)
                count++;
        }
        return count;
    }
};