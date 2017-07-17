class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size()-1;
        vector<vector<int>> res(n+1,vector<int>(n+1,0));
        for(int i = 0; i<=n;i++)
            for(int j = 0; j<=n; j++)
                res[i][j] = matrix[n-j][i];                
        matrix.assign(res.begin(), res.end()); 
    }
};