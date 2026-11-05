#include <stdio.h>
#define MAX 300

int main()
{
	int len = 0, temp;
	int A[MAX];

	while(len < MAX)
	{
		scanf_s("%d", &temp);
		if(temp == -1)
		{
			break;
		}
		A[len] = temp;
		len++;
	}

	int k = -1;
	for(int i = 0; i < len; i++)
	{
		if(A[i] < 0)
		{
			continue;
		}
		if(k == -1 || A[i] < A[k])
		{
			k = i;
		}
	}

	printf("Res: %d \n", A[k]);

	return 0;
}
