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
