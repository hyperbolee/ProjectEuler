/*
  PROBLEM 5: Smallest multiple

  2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int p5()
{
	int smallest = 0;

	for(int s=20; ; s+=10)
	{
		bool divides = true;
		for(int i=2; i<21; i++)
			if(s%i!=0)
			{
				divides = false;
				break;
			}

		if(divides)
		{
			smallest = s;
			break;
		}
	}

	cout << "Smallest multiple: " << smallest << endl;
	for(int i=1; i<21; i++)
		cout << Form("%d / %d = %d",smallest,i,smallest/i) << endl;
}
