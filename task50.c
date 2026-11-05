#include <stdio.h>
#define MAX 300

int main()
{
	int temp, len;
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

	int s = 0, k = 0;
	for(int i = 0; i <  len; i++)
	{
		if(A[i] < 0)
		{
			k = 1;
		}
		else
		{
			if(k == 1)
			{
				s++;
				k = 0;
			}
		}
	}

	printf("Res: %d \n", s);

	return 0;
}
