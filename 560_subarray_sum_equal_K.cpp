class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int len = nums.size();    
        int count = 0;           // initialize the output
        
        for(int i = 0; i<len-1 ; i++)    // revise the original array to the array of accumulated numbers
        {
            nums[i+1]+=nums[i];
        }
        
        for(int i = 0; i<len ; i++)    // the round from adding the first one
            if(nums[i]==k)
                count++;
        
        for(int i = 1; i<len; i++)       // all the remaining subarrays
            for(int j = 0; j<i; j++)
                if(nums[i]-nums[j]==k)
                    count++;
        return count;
    }
};