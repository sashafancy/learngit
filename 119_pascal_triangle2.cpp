class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        int i = 0;
        vector<int> ini(1,1);
        while(i++<rowIndex)
        {
            ini.insert(ini.begin(),0);
            for(int j = 0; j<ini.size()-1; j++)
                ini[j]+=ini[j+1];
        } 
        return ini;
    }
};