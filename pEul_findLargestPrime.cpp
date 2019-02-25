#include <iostream>

/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/

long factorize();

using namespace std;

const long long keyNumber = 600851475143;

int main(){
	long largestNumber;
	
	largestNumber = factorize();
	
	cout << "Largest Prime Number is: " << largestNumber << endl;
}

long factorize(){
	long long localNumber = keyNumber;
	long index;
	
	for(long i = 1; i <= localNumber; i++){
		if(localNumber%i == 0){
			cout << i << endl;
			localNumber = localNumber/i;
			
			index = i;
		}
	}
	
	return index;
}
