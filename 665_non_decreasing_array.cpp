class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        vector<int> a(nums);
        int len = nums.size();
        if(len == 0)
            return true;
        int count1 = 1;
        int count2 = 1;
        
        for(int i = len - 1; i > 0; i--)
        {
            if(nums[i]<nums[i-1])
            {
                count1--;
                nums[i-1] = nums[i]; 
            }
        }
        
        for(int i = 0; i< len-1; i++)
        {
            if(a[i]>a[i+1])
            {
                count2--;
                a[i+1] = a[i];
            }
        } 
        
        if((count1 < 0) && (count2 < 0))
            return false;
        else
            return true;
    }
};