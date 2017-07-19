class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int len = nums.size();
        if(len == 0)
            return -1;
        int l = 0, r = len - 1;
        
        while(l<=r)
        {
            int mid = l + (r - l)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid]>=nums[l])
            {
                if(target>nums[mid]||target<nums[l])
                    l = mid + 1;
                else 
                    r = mid - 1;
            }
            else 
            {
                if(target<nums[mid]||target>nums[r])
                    r = mid - 1;
                else 
                    l = mid + 1;
            }
            
        }
        return -1;
    }

};