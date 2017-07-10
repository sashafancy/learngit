class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size()-1;
        return binary_search(0,len,nums);
    }
    int binary_search(int l, int r, vector<int>& nums)
    {
        if(l==r)
            return nums[l];
        if(l==r-1)
            return min(nums[l],nums[r]);
        else
        {
            int mid = (l+r)/2-1;
            return min(binary_search(l,mid,nums),binary_search(mid+1,r,nums));       
        }

    }
};