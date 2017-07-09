class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int len = nums.size();
        k %=len;
        vector<int> temp(nums);
        temp.erase(temp.begin(),temp.begin()+len-k);
        nums.insert(nums.begin(),temp.begin(),temp.end());
        nums.resize(len);
    }
};