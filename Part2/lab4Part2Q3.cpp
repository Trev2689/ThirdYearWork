//Trevor Doyle C00170053

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	vector<int> v;		

	for (int i = 1; i <= 10; i++)
		v.push_back(i);

	std::cout << "\nVector elements are: ";
	for (auto it = v.begin(); it != v.end(); it++)
			std::cout << *it << " ";


	int firstEl = INT_MIN; 
	int secondLar = INT_MIN; 
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > firstEl)
		{
			secondLar = firstEl;
			firstEl = v[i];
		}
		else if (v[i] > secondLar && v[i] != firstEl)
			secondLar = v[i];
	}

	cout << "\n2nd Largest element is " << secondLar;
	return 0;

}
	
