class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        int result = 0;
        int len = timeSeries.size();
        if(len == 0)
            return 0;
        for(int i = 0; i<len - 1; i++ )
            if(timeSeries[i]+duration>timeSeries[i+1])
                result += timeSeries[i+1] - timeSeries[i];
            else
                result += duration;
        result += duration;
        return result;
    }
};