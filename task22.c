#include <stdio.h>
#define MAX 300

int main()
{
	int A[MAX];
	int i = 0, v;

	printf("Enter max num: \n");
	scanf_s("%d", &v);

	for(int a = 2; a < v; a++)
	{
		int s = 0;
		for(int n = 2; n < a; n++)
		{
			if(a%n == 0)
			{
				s = 1;
				break;
			}
		}
		if(s == 0)
		{
			A[i++] = a;
		}
	}
	A[i] = 0;

	printf("Res: ");
	for(int j = 0; j < i; j++)
	{
		if(j != i - 1)
		{
			printf("%d, ", A[j]);
		}
		else
		{
			printf("%d. \n", A[j]);
		}
	}

	return 0;
}
