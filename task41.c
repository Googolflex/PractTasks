#include <stdio.h>
#define MAX 300

int main()
{
	int k = 0, s = 0, n = 0;
	int len = 0;
	int temp;
	int A[MAX];

	for(int i = 0; i < MAX; i++)
	{
		scanf("%d", &temp);
		if(temp == 404)
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
			k = 1;
			s = s + A[i];
		}
	}

	printf("Res: %d \n", s);

	return 0;
}
