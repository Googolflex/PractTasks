#include <stdio.h>
#define MAX 300

int main()
{
	int s = 0;
	int A[MAX];
	int len = 0, b = -1, temp;

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

	for(int i = 0; i < len - 1; i++)
	{
		if(A[i] == A[i + 1])
		{
			int k;
			for(k = 2; i + k < len && A[i] == A[i + k]; k++){}
			if(k > s)
			{
				s = k;
				b = i;
			}
		}
	}

	printf("Res: %d, start index: %d \n", s, b);

	return 0;
}
