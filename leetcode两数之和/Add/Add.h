/*给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]*/

#include <iostream>
#include <vector>

using namespace std;
class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int target){
		for (i=0; i < nums.size(); i++)
		{
			for (j=i+1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target){
					vector<int> two{ i, j };
					return two;
				}
			}
		}
	}
	int i, j;
};