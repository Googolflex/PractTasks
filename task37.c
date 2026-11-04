#include <stdio.h>
#define MAX 300

int main()
{
	int temp, len = 0;
	int A[MAX];

	for(int i = 0; i < MAX; i++)
	{
		scanf("%d", &temp);
		if(temp == -1)
		{
			break;
		}
		A[i] = temp;
		len++;
	}

	int m, s = 0;
	for(int i = 0; i < len; i++)
	{
		m = 0;
		for(int j = i + 1; j < len; j++)
		{
			if(A[i] == A[j])
			{
				m++;
			}
		}
		//m++;
		if(m > s)
		{
			s = m;
		}
	}

	printf("Res: %d \n", s);

	return 0;
}
