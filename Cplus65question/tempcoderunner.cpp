#include <iostream>
using namespace std;

int main(){


	int n= 5;
	for(int i= 0; i<5; i++){
	cout<<i<<endl;
    }

	return 0;
}



// The pow(base, exponent) function in C++ returns a floating-point (double) value, not an integer. When using it in integer calculations, small precision errors might cause incorrect results.

// For example, pow(5,3) ideally gives 125, but due to floating-point precision issues, it might return something like 124.99999999. When this is added to sum, truncation due to implicit type conversion might lead to 152 instead of 153.

// To avoid this error we round the no.

// sum = sum + round(pow((temp % 10), d)); // More reliable