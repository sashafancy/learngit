class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==0)
            return {};
        int count = 1;
        for(int i = 0; i<nums.size()-1; i++)
        {
            if(nums[i+1]!=nums[i])
                count = 1;
            else if(nums[i+1]==nums[i])
                count++; 
            if(count>2)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};