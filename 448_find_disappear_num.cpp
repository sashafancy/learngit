class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result={};
        
        sort(nums.begin(),nums.end());
        unique(nums.begin(),nums.end());
        for(int i=0,j=0; j<nums.size(); )
        {
            if(nums[i]!=j+1)
            {
                result.push_back(j+1);
                i--;
            }
            i++;
            j++;            
        }
    return result;
    }
};