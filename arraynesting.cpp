// TIMIE LIMIT SOLUTION 1
class Solution {
public:
	int arrayNesting(vector<int>& nums) {
		vector<int>::iterator it;
		//vector<int> result;

		// initiate the size variable 
		int result = 0;

		// starting from the first element of the nums array
		for (int i = 0; i<nums.size(); i++)
		{
			vector<int> cycle{ nums[i] };

			for (int j = i; j<nums.size();)
			{
				//int value = nums[nums[j]];
				it = find(cycle.begin(), cycle.end(), nums[nums[j]]);

				if (it != cycle.end())
				{

					//if(cycle.size()>result)
					//{

					//    result = cycle.size(); 
					//    //result = cycle[1];
					//}
					int size = cycle.size();
					result = max(result, size);
					break;
				}
				else
				{
					j = nums[j];
					cycle.push_back(nums[j]);
				}
			}

		}
		return result;
	}
};



// TIME LIMIT 2
class Solution {
public:
	int arrayNesting(vector<int>& nums) {
		//vector<int>::iterator it;
		//vector<int> result;

		// initiate the size variable 
		int result = 0;

		// starting from the first element of the nums array
		for (int i = 0; i<nums.size(); i++)
		{
			int count[20000] = { 0 };
			count[i] = 1;
			int c = 1;
			//vector<int> cycle {nums[i]};

			for (int j = i; j<nums.size();)
			{

				//it = find(cycle.begin(),cycle.end(),nums[nums[j]]);

				if (count[nums[j]] == 1)
				{

					//if(cycle.size()>result)
					//{

					//    result = cycle.size(); 
					//    //result = cycle[1];
					//}
					// int size = cycle.size();
					result = max(result, c);
					break;
				}
				else
				{
					count[nums[j]] = 1;
					j = nums[j];
					c++;
					//cycle.push_back(nums[j]);
				}
			}

		}
		return result;
	}




class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        
        // initiate the size variable 
        int result=0;
        int count[20000] = {0};
        
        // starting from the first element of the nums array
        for(int i = 0;i<nums.size(); i++)
        {   
            if(count[i]==1)
                continue;
            count[i] = 1;
            int c = 1;
            
            for(int j = i;j<nums.size(); )
            {
                if(count[nums[j]]!=1)
                {   
                    count[nums[j]]=1;
                    j = nums[j];
                    c++;
                    
                }
                else
                {
                    result = max(result,c);
                    break;
                }
            }
            
        }
        return result;
    }
};




// ACCEPTED ANSWER 1
class Solution {
public:
	int arrayNesting(vector<int>& nums) {

		// initiate the size variable 
		int result = 0;
		int count[20000] = { 0 };

		// starting from the first element of the nums array
		for (int i = 0; i<nums.size(); i++)
		{
			if (count[i] == 1)
				continue;
			count[i] = 1;
			int c = 1;

			for (int j = i; j<nums.size();)
			{
				if (count[nums[j]] != 1)
				{
					count[nums[j]] = 1;
					j = nums[j];
					c++;
				}
				else
				{
					result = max(result, c);
					break;
				}
			}
		}
		return result;
	}
};