class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> result;
        int i,j;
        //int k = 1001;
        
        for(i = 0; i<findNums.size(); i++){
            int k = 10001;
            for(j = 0; j<nums.size(); j++){
                if(nums[j]==findNums[i]){
                    k = nums[j];
                }
                if(nums[j]>k){
                    result.push_back(nums[j]);
                    break;
                }
                else if(j==nums.size()-1){
                    result.push_back(-1);
                    break;
                }
            }
        }
        return result;
    
    }
};



class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};