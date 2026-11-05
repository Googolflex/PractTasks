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

	int s = 0;
	for(int i = 0; i < len; i++)
	{
		if(A[i] < 0)
		{
			continue;
		}
		if(A[i] == 0)
		{
			break;
		}
		s = s + A[i];
	}

	printf("Res: %d \n", s);

	return 0;
}
