class Solution {
public:
    bool bi_search(int left, int right,vector<int>& nums, int t)
        {
            if(left == right)
                if(nums[left]==t)
                    return true;
                else
                    return false;
            else
            {
                int mid = (left+right)/2;
                if(t==nums[mid])
                    return true;
                else
                {
                    bool a = bi_search(left,mid,nums,t);  
                    bool b = bi_search(mid+1,right,nums,t);
                    if(a==true||b==true)
                        return true;
                    else
                        return false;
                }                
            }
 
        }
    bool search(vector<int>& nums, int target) {
        
        if(nums.size()==0)
            return false;
        return bi_search(0, nums.size()-1,nums, target);
    }
};