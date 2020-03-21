// Swap two number


#include<iostream>
#include<time.h>

void Exchange(int &num1, int &num2);

int main()
{
	int num1, num2;
	// double num1, num2; // Not surport byte calculate
	srand(time(NULL));
	num1 = rand() % 100;
	num2 = rand() % 100;
	// num1 = rand() / (double)RAND_MAX * 100;
	// num2 = rand() / (double)RAND_MAX * 100;
	std::cout << "The original two number are: num1 = " << num1 << ", num2 = " << num2 << std::endl;
	/* num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2; */
	// std::swap(num1, num2); // C++ function
	Exchange(num1, num2);
	std::cout << "After swaping, the two number are: num1 = " << num1 << ", num2 = " << num2 << std::endl;
	
	return 0;
}

void Exchange(int &num1, int &num2)
{
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
}