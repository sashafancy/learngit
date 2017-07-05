class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int len = nums.size();
        
        
        // method 1
        
        vector<int>::iterator ret = remove(nums.begin(),nums.end(),0);
        nums.erase(ret,nums.end());
        count = len - nums.size();
        
        
        // method 2
        /*
        for(int i = 0; i<len ; i++)
            if(nums[i]==0)
            {
                count++;
                nums.erase(nums.begin()+i);
            }
        */
        
        
        nums.insert(nums.end(),count,0);
    }
};