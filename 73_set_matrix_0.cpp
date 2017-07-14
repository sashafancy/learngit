class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.empty()||matrix[0].empty()){}
        int n = matrix.size(), m = matrix[0].size();
        vector<int> row = {}, col = {};
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++)
                if(matrix[i][j]==0)
                {
                    row.push_back(i);
                    col.push_back(j);
                }
        unique(row.begin(),row.end());
        sort(col.begin(),col.end());
        unique(col.begin(),col.end());
        for(const auto x:row)
            for(int i = 0; i<m; i++)
                matrix[x][i]=0;
        for(const auto x:col)
            for(int i = 0; i<n; i++)
                matrix[i][x]=0;
    
    }
};