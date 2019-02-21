#include <cstdlib>
#include <iostream>

using namespace std;

//Function to find the multiples
int findIfMultiple(int);

//MAX we're searching for
const int MAX = 1000;
const int multipleA = 3; //First multiple we're searching for
const int multipleB = 5; //Second multiple we're searching for

int main(){
	int sum;
	
	cout << "Find the sum of all the multiples of " << multipleA << " or " <<
			multipleB << " below " << MAX << "." << endl; //Find the sum
	
	for(int i; i < MAX; i++){
		sum += findIfMultiple(i); //run until max is reached
	}
	
	cout << "The sum is: " << sum << endl; //Display the sum
	
	return 0;
}

int findIfMultiple(int i){
	if((i%multipleA == 0) || (i%multipleB == 0)){
		cout << i << endl; //Display current multiple
		
		return i; //Return the variable
	}else{
		
		return 0; //Else return to the sum 0
	}
}
