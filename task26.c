#include <stdio.h>
#define MAX 300

int main()
{
	int len, temp;
	int A[MAX];

	for(len = 0; len < MAX; len++)
	{
		scanf_s("%d", &temp);
		if(temp == -1)
		{
			break;
		}
		A[len] = temp;
	}

	for(int i = 0; i < len; i ++)
	{
		int s = 0;
		for(int m = 2; m < A[i]; m++)
		{
			if(A[i] % m == 0)
			{
				s = 1;
				break;
			}
		}
		if(s == 0)
		{
			for(int j = i; j < len -1; j++)
			{
				A[j] = A[j + 1];
			}
			len--;
			i--;
		}
	}

	printf("Res: ");
	for(int i = 0; i < len; i++)
	{
		if(i != len - 1)
		{
			printf("%d, ", A[i]);
		}
		else
		{
			printf("%d. \n", A[i]);
		}
	}

	return 0;
}
