/*
  PROBLEM 4: Largest palindrome product

  A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int count = 0;
int palindrome(int n)
{
	if(n<10) return n;

	int p = palindrome(n/10);
	count++;
	
	return p + pow(10,count)*(n%10);
}

int p4()
{

	int max(0), maxI(0), maxJ(0);
	for(int i=999; i>100; i--)
	{
		for(int j=999; j>100; j--)
		{
			count = 0;
			int p = palindrome(i*j);
			if(i*j == p && max<=p)
			{
				max = p;
				maxI = i;
				maxJ = j;
				
			}
		}
	}

	cout << Form("Largest Palindrome from 3-digit numbers:\n%d * %d = %d",maxI,maxJ,max) << endl;

	return 0;
}
