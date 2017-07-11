class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size()==0)
            return 0;
        int m_min = prices[0];
        int m_max = 0;
        for(const auto x:prices)
        {
            m_min = min(x,m_min);
            m_max = max(x-m_min,m_max);
        }
        return m_max;
            
    }
};