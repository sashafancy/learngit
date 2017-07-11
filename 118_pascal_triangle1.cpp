class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> result = {};
        if(numRows==0)
            return {};
        vector<int> ini(1,1);
        result.push_back(ini);
        int i = 0;
        while(i++<numRows-1)
        {
            ini.insert(ini.begin(),0);
            for(int j = 0; j < ini.size()-1; j++)
                ini[j] += ini[j+1];
            result.push_back(ini);
        }
        return result;
    }
};