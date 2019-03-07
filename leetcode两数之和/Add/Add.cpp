#include "Add.h"

int main()
{
	int target = 9;
	vector<int> b{ 11,15,2,7 };
	Solution S;
	vector<int> a = S.twoSum(b, target);
	cout <<a[0]<<","<<a[1]<<endl;
	system("pause");
	return 0;
}