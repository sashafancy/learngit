class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {

        //if(M.empty()==true||M[0].empty()==true)
            //return {};
        int m = M.size();
        if(m==0)
            return {};
        int n = M[0].size();
        vector<vector<int>> res(m,vector<int>(n,0));
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                int sum = M[i][j];
                int count = 1;
                if((i-1>=0)&&(i-1<m))
                {
                    if((j-1>=0)&&(j-1<n))
                    {
                        sum+=M[i-1][j-1];
                        count+=1;      
                    }
                    if((j>=0)&&(j<n))
                    {
                        sum+=M[i-1][j];
                        count+=1;                      
                    }
                    if((j+1>=0)&&(j+1<n))
                    {
                        sum+=M[i-1][j+1];
                        count+=1;
                    }
                }
                if((i+1>=0)&&(i+1<m))
                {
                    if((j-1>=0)&&(j-1<n))
                    {
                        sum+=M[i+1][j-1];
                        count+=1;      
                    }
                    if((j>=0)&&(j<n))
                    {
                        sum+=M[i+1][j];
                        count+=1;                      
                    }
                    if((j+1>=0)&&(j+1<n))
                    {
                        sum+=M[i+1][j+1];
                        count+=1;
                    }
                }
                    if((j-1>=0)&&(j-1<n))
                    {
                        sum+=M[i][j-1];
                        count+=1;      
                    }
                    if((j+1>=0)&&(j+1<n))
                    {
                        sum+=M[i][j+1];
                        count+=1;
                    }       
                res[i][j] = (int)(sum/count);
            }
        }
        return res;
    }
};