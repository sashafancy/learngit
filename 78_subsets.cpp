class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result = {{}};
        for(const auto x:nums)
        {
            vector<vector<int>> temp(result);
            for(int i = 0; i<temp.size(); i++)
                temp[i].push_back(x);
            result.insert(result.begin(),temp.begin(),temp.end());   
        }
        return result;
    }
};