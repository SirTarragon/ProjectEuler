/* -- Problem # 6
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <iostream>

using namespace std;

const int MAX = 100; //Max variable

int main(){
	int sumOfSquares = 0;
	int sum = 0;
	int squareSum;
	int difference;
	
	
	//Find the sumOfSquares and the normal sum
	for(int i = 1; i <= MAX; i++){
		sumOfSquares += i * i;
		sum += i;
	}
	
	//Calculate
	squareSum = sum * sum;
	difference = squareSum - sumOfSquares;
	
	//Display
	cout << "Sum of the squares is: " << sumOfSquares << endl;
	
	cout << "The square of the sum is: " << squareSum << endl;
	
	cout << "The difference of the two is: " << difference << endl;
	
	return 0;
}
