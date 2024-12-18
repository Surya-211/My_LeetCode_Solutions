class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        for(int i=0;i<prices.size();i++)
        {
            int price1=prices[i];
            for(int j=i+1;j<prices.size();j++)
            {
                int price2=prices[j];
                if(price1>=price2)
                {
                    price1=price1-price2;
                    break;
                }
                    
            }
            prices[i]=price1;
        }
        return prices;
    }
};