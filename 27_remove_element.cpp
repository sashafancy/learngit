class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int s = 0, e = 0;   
        while(e<len)
        {
            if(nums[e]!=val)
            {
                int temp = nums[e];
                nums[e++] = nums[s];
                nums[s++] = temp;
            }
            else
                e++;
        }
        return s;
    }
};