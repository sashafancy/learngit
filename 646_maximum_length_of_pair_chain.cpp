
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int m = pairs.size();
        if(m==0)
            return 0;
        for(int i = 1; i<m; i++)
        {
            while(i>0&&pairs[i][0]<pairs[i-1][0])
            {
                int tempx = pairs[i][0];
                int tempy = pairs[i][1];
                pairs[i][0] = pairs[i-1][0];
                pairs[i][1] = pairs[i-1][1];
                pairs[i-1][0] = tempx;
                pairs[i-1][1] = tempy;
                i--;
            }
        }
        
        vector<int> count(m,1);
        for(int i = 0; i<m; i++)
            for(int j = 0; j<i; j++)
                if(pairs[j][1]<pairs[i][0])
                    count[i] = max(count[i] ,count[j] + 1);        
        sort(count.begin(),count.end());
        return count[count.size()-1];
    }
};