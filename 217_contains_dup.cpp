class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int len = nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i<len-1; i++)
            if(nums[i+1]==nums[i])
                return true;
        return false;
    }
};