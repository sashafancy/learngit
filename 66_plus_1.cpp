class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        digits = plus(digits, len - 1);
        return digits;
    }
    vector<int> plus(vector<int> nums, int i)
        {
            if(nums[i]==9)
            {
                nums[i] = 0;
                if(i==0)
                {
                    nums.insert(nums.begin(),1);
                    return nums;
                }
                else
                    return plus(nums,i-1);               
            }
            else
            {
                nums[i]++;
                return nums;   
            }

        }
};