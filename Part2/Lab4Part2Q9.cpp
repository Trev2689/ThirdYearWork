// Lab4Part2Q9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
std::vector <int> minmax(vector<int>&in)

{
	int smallestElement = in[0]; //let, first element is the smallest one
	int largestElement = in[0]; //also let, first element is the biggest one
	//std::vector<int> toBeReturned(2);
	for (int i = 1; i < 10; i++)  //start iterating from the second element
	{
		if (in[i] < smallestElement)
		{
			smallestElement = in[i];
		}
		if (in[i] > largestElement)
		{
			largestElement = in[i];
		}

	}
	std::vector<int> toBeReturned(2);
	toBeReturned[0] = smallestElement;
	toBeReturned[1] = largestElement;

	return toBeReturned;
}
int main() {
	vector<int> v;		// declare an int vector

	for (int i = 1; i <= 10; i++)
		v.push_back(i);

	vector<int> result;
	result= minmax(v);
	for (int i = 0; i < 2; ++i)
	{
		std::cout <<  result[i];
	}
	


	

}


