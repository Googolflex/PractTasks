#include <stdio.h>

int main()
{
	int num, len;

	printf("Enter num: \n");
	scanf_s("%d", &num);

	int n = num;
	int i;
	for(i = 0; n != 0; i ++, n = n / 10) { }

	int A[i];
	len = i;
	for(A[i--] = -1, n = num; n != 0; n = n / 10)
	{
		A[i] = n % 10;
		i--;
	}

	printf("Res: ");
	for(int j = 0; j < len; j++)
	{
		if(j != len - 1)
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
