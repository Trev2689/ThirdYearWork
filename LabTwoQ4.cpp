//Trevor Doyle C00170053
#include <iostream>
using namespace std;


int main()
{

	const int arraySize = 10;
	int intArray[arraySize] = { 1,2,3,4,222,6,7,0,9,10 };

	int min = intArray[0];
	int max = intArray[0];
	for (int i = 1; i < arraySize; i++)
	{
		if (min > intArray[i])
		{
			min = intArray[i];
		}
		else if (max < intArray[i])
		{
			max = intArray[i];
		}
	}

		cout << "Maximum number is: " << max;
		cout << "Minimum number is: " << min;

	return 0;



}
