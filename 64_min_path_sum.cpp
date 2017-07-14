class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int m = grid.size(), n = grid[0].size();
        
        vector<vector<int>> minP(m,vector<int>(n,0));
        minP[0][0] = grid[0][0];
        
        for(int i = 1; i<m; i++)
            minP[i][0] = minP[i-1][0]+grid[i][0];
        for(int i = 1; i<n; i++)
            minP[0][i] = minP[0][i-1]+grid[0][i];
        for(int i = 1; i<m; i++)
            for(int j = 1; j<n; j++)
                minP[i][j] = min(minP[i-1][j],minP[i][j-1])+grid[i][j];
        
        return minP[m-1][n-1];
       
    }
};