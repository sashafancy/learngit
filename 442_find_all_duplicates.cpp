class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int count = 0;
        sort(nums.begin(),nums.end());

        if(nums.size()==0)
            return {};

        for(int i=0; i< nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
                nums[count++]=nums[i];               
        }
        nums.erase(nums.begin()+count,nums.end());
        return nums;
    }
};