class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size()-1;
        int l = 0, r = len;
        return maxSub(nums, l, r);
    }
    int maxSub(vector<int>& nums, int l, int r)
    {
            if(l == r)
                return nums[l];
            int mid = (l+r)/2;
            int lmax = maxSub(nums,l,mid);
            int rmax = maxSub(nums,mid+1,r);
            int t1 = nums[l];
            for(int i = l+1; i <= mid; i++)
                t1 = max(t1+nums[i],nums[i]);
            int t2 = nums[r];
            for(int i = r-1; i >= mid+1; i--)
                t2 = max(t2+nums[i],nums[i]);
            int mmax = t1+t2;
            return max(lmax,max(rmax,mmax));
    }
};