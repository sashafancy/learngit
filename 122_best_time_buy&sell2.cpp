class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int len = prices.size();
        int profit = 0;
        for(int i = 0; i<len-1 ; i++)
            profit += max(0,prices[i+1]-prices[i]);
        return profit;
    }
};