//Trevor Doyle C00170053
#include <iostream>
using namespace std;


int main()
{
	const int arraySize = 12;
	int count=12;
	
	
	int intArray[arraySize] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	std::cout << " Array Reversed is : \n ";

	int i = 0, j = count-1;
	for (i = 0; i < arraySize / 2; i++, j--) {
		int temp = intArray[i];
		intArray[i] = intArray[j];
		intArray[j] = temp;
	}
	for(i=0; i<arraySize; i++)
	{
		cout << intArray[i]<<" ";
	
}


}
