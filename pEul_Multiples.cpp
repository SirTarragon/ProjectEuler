#include <iostream>

using namespace std;

int calFib_EvenSum(int[2]); //Finds the total sum of the even-valued terms

const int MAX = 4000000; //Max for the fib values

int main(){
	int fib[2]= {1,1}; //Array
	int sum; //the sum
	
	sum = calFib_EvenSum(fib); //Find sum
	
	cout << "The sum of the even valued terms are: " << sum; //Display the sum
	
	return 0;
}

int calFib_EvenSum(int fib[2]){
	int funcEvenSum;
	
	/*for(int i = 1; i < MAX; i++){ // To test if it'll get the first 10 terms and spit out
	//the even sum*/
	for(int storedValue = 0; storedValue < MAX;){ //Loop as long as the digit does not exceed max
		storedValue = fib[0] + fib[1]; //Assign the storedValue with the sum of fib[0] and fib[1]
		
		//Actually display it to the command line as well
		cout << fib[0] << " + " << fib[1] << " = " << storedValue << endl;
		
		//If the storedValue has no remainder when divided by 0, add it to the funcEvenSum
		if(storedValue%2==0){
			funcEvenSum += storedValue;
		}
		
		//Set the fibs to their new integers in the sequence
		fib[0] = fib[1];
		fib[1] = storedValue;
	}
	
	return funcEvenSum;
}
