/*
  PROBLEM 3: Largest prime factor
  The prime factors of 13195 are 5, 7, 13 and 29.

  What is the largest prime factor of the number 600851475143 ?
*/

// Author: Lee Allison, April 11, 2017

#include <iostream>

using namespace std;

// checks if the given integer
// is a prime number
bool isPrime(long int n)
{
	if(n<=1)
		return false;

	if(n==2)
		return true;
	
	if(n%2==0)
		return false;
	
	for(int i=3; i<=sqrt(n)+1; i+=2)
	{
		if(n%i==0)
			return false;
	}

	return true;
}

void p3()
{
	long int num = 600851475143;
	cout << "PRIME FACTORS OF " << num << endl;
	for(long int n=2; n<(long int)(sqrt(num)+1); n++)
	{
		if(num%n==0 && isPrime(n))
			cout << n << endl;
	}
	
	return 0;
}
