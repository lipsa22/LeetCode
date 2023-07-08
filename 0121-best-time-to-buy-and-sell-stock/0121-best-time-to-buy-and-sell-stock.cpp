class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minprice=INT_MAX;
        int profit=0;
        int i;
        
        for(i=0;i<prices.size();i++)
        {
            minprice=min(minprice,prices[i]);
            profit=max(profit,prices[i]-minprice);
        }
        return profit;
    }
};