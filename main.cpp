// ITP 365 Spring 2019
// LP5 – Recursion
// Name: Izzy Rees
// Email: ttrojan@usc.edu
// Platform: PC

#include <iostream>

// Function: sumDigits
// Purpose: Creates a sum of all the digits
// Input: user's int variable
// Output: int w/ sum of digits
int sumDigits(int sum) {
	if (sum == 0) {
		return 0;
	}
	else {
		return (sum % 10 + sumDigits(sum / 10));
	}
}

// Function: getGCD
// Purpose: finds the greatest common denominator
// Input: 2 integers
// Output: 1 int with GCD
int getGCD(int x, int y) {
	// divide by 0
	if (x == 0) {
		return y;
	}
	else if (y == 0) {
		return x;
	}
	// make sure values aren't equal
	else if (x == y) {
		return x;
	}
	// check if x is greater
	else if (x > y) {
		return getGCD(x - y, y);
	}
	else {
		return getGCD(x, y - x);
	}
}

int main() {

	int x, y;

	// ask user for numbers
	std::cout << "Gimme a number: ";
	std::cin >> x; 
	std::cout << "Gimme another number: ";
	std::cin >> y;

	// print out results
	std::cout << "Sum digits (" << x << ") = " << sumDigits(x) << std::endl;
	std::cout << "Sum digits (" << y << ") = " << sumDigits(y) << std::endl;
	std::cout << "gdc(" << x << ", " << y << ") = " << getGCD(x, y) << std::endl;

	return 0;
}