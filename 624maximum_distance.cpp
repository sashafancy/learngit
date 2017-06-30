test case :
[[-8,-7,-7,-5,1,1,3,4],[-2],[-10,-10,-7,0,1,3],[2]]     14
[[1,4],[0,5]]     4


class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        
        int dis=0;
        
        for(int i = 0;i<arrays.size()-1;i++)
        {
            //int dis1=0;
            for(int j = i+1;j<arrays.size();j++)
            {
				int dis1 = arrays[i][arrays[i].size()-1]-arrays[j][0];
                if(dis1>dis)
                    dis = dis1;
            	int dis2 = arrays[j][arrays[j].size()-1]-arrays[i][0];
            	if(dis2> dis)
                	dis = dis2;              
            }
        }
        return dis;
    }
};