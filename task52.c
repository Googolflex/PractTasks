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

	int k = 0;
	for(int i = 0; i < len; i++)
	{
		if(A[i] > A[k])
		{
			k = i;
		}
	}

	printf("Max index: %d \n", k);

	return 0;
}
