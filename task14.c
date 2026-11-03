#include <stdio.h>

int main() 
{
	int a;
	int s = 0, k;
	scanf_s("%d", &a);

	for(int n = a; n != 0; n = n / 10)
	{
		k = n % 10;
		if(k>s)
		{
			s = k;
		}
	}

	printf("Res: %d", s);
}
