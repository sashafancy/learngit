class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()||matrix[0].empty())
            return false;
        int n = matrix.size(), m = matrix[0].size();
        int l = 0, r = m*n-1;
        while(l<=r)
        {   
            int mid = (r+l)/2;
            int x = mid/m, y = mid%m;
            if(target<matrix[x][y])
                r = mid-1;
            else if(target>matrix[x][y])
                l = mid+1;
            else if(target == matrix[x][y])
                return true;
        }
        return false;
    }
};