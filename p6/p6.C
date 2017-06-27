/*
  PROBLEM 6: Sum square difference

  The sum of the squares of the first ten natural numbers is,

  12 + 22 + ... + 102 = 385
  The square of the sum of the first ten natural numbers is,

  (1 + 2 + ... + 10)2 = 552 = 3025
  Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

  Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

void p6()
{
	int n = 100;
	int sqrsum = pow(n*(n+1)/2,2);
	int sumsqr = 0;
	for(int i=1; i<=n; i++)
		sumsqr += i*i;

	cout << Form("Sum square difference for %d: %d - %d = %d",n,sqrsum,sumsqr,sqrsum-sumsqr) << endl;
}
