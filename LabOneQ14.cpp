//Trevor Doyle C00170053
#include <iostream>
using namespace std;
void printPairs(int product, int arr[], int arrSize);

int main()
{
	const int arraySize = 8;
	int intArray[arraySize] = { 1,2,3,4,5 ,2,7,8};
	


	printPairs(24, intArray, arraySize);




}
 void printPairs(int product, int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		int first = arr[i];
		for (int j = i + 1; j < arrSize; j++)
		{
			int second = arr[j];
			if ((first*second) == product)
			{
				cout <<"( " << first << " , " << second << ") ";
			}
		}
	}
}