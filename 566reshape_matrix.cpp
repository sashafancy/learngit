class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int i = nums.size();
        if(i==0)
            return {};
        int j = nums[0].size();
        int sum = 0;
        if(i*j!=r*c)
            return nums;
        else
        {
            vector<int> temp = {} ;
            vector<vector<int>> res ={};
            
            for(int m = 0; m<i; m++)
                for(int n = 0; n<j; n++)
                    temp.push_back(nums[m][n]);
            for(int m = 0; m<r; m++)
            {
                vector<int> temp2 ={};
                for(int n = 0; n<c; n++)
                {
                    temp2.push_back(temp[sum]);
                    sum++;
                } 
                res.push_back(temp2);
            }

            
            return res;
        }
    }
};