class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result = {};
        vector<int> front = {};       // initialize the accumulated products in increasing order
        vector<int> rear = {};        // initialize the accumulated products in descending order
        int len = nums.size();
        
        int p1 = 1;   
        int p2 = 1;
        for(int i = 0; i<len; i++)
        {
            p1 *=nums[i];
            p2 *=nums[len-i-1];
            front.push_back(p1);
            rear.push_back(p2);
        }
        
        result.push_back(rear[len-2]);
        for(int i = 1; i<len-1; i++)
        {
            int p3 = 1;
            p3 = front[i-1]*rear[len-i-2];
            result.push_back(p3);
        }  
        result.push_back(front[len-2]);
        return result;
    }
};