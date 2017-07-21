class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length()+1;
        int n = word2.length()+1;
        vector<vector<int>> dist(m,vector<int>(n,0));
        for(int i = 0; i<m; i++)
            dist[i][0] = i;
        for(int j = 1; j<n; j++)
            dist[0][j] = j;
        for(int i = 1; i<m; i++)
            for(int j = 1; j<n; j++)
            {
                int diff = 0;
                if(word1[i-1]!=word2[j-1])
                    diff = 1;
                dist[i][j] = min(min(dist[i-1][j] + 1,dist[i][j-1] + 1),dist[i-1][j-1] + diff);
            }
        return dist[m-1][n-1];
    }
};