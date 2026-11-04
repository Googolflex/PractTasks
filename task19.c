#include <stdio.h>
#define MAX 300

int main()
{
	int temp, len = 0;
	int A[MAX];

	for(int i = 0; i < MAX; i++)
	{
		scanf_s("%d", &temp);
		if(temp == -1)
		{
			break;
		}
		A[i] = temp;
		len++;
	}

	for(int i = 0; i < len; i++)
	{
		if(A[i] < 0)
		{
			for(int j = i; j < len - 1; j++)
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
