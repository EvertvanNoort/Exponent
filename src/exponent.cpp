// function to calculate exponent for a user provided x
// Author: Evert van Noort

#include <iostream>
#include <math.h>

int factorial(int n);

int main()	{

	double x; 	// input value
	double ex; 	// exponent
	int n = 10;	// number of iterations for sum

	std::cout << "please enter x for exp(x)" << std::endl;
	std::cin >> x; // user input

	for(unsigned int i = 0; i <= n; i++) {
	
		ex = ex + pow(x,i)/factorial(i); // iterator, calculates exponent from Taylow apporimation
	}

	std::cout << "My exponent: " << ex << std::endl; // nice output
	std::cout << "Reference: " << exp(x) << std::endl;
	std::cout << "done!" << std::endl;

	return 0;
}

// This one is nice, it's recursive!
// I googled this one, Bart told me I could do so.
int factorial(int n)	{

    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}