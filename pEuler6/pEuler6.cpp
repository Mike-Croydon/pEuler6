// This program solves Project Euler problem 6, which calculates the difference between the sum of squares and square of sum of the first 100 natural numbers
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	long long int sumSquare = 0, squareSum = 0;
	
	for (int i = 1; i <= 100; i++)
	{
		sumSquare += pow(i, 2);
		squareSum += i;
	}

	squareSum = pow(squareSum, 2);

	cout << "The difference between sum of square and square of sums is: " << squareSum - sumSquare;

}

