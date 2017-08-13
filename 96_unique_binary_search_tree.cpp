class Solution {
public:
    int numTrees(int n) {
        if(n ==0||n== 1)
            return 1;
        else if(n == 2)
            return 2;
        
        vector<int> memo(n+1,0);
        memo[1] = 1;
        memo[2] = 2;
        for(int i = 3; i<n+1; i++)
        {
            int c = 2*memo[i-1];
            for(int j = 1; j<i-1; j++)
            {
                c += memo[j]*memo[i-j-1];
            }
            memo[i] = c;
        }
        return memo[n];
    }
    
    
    
};