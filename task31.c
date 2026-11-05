#include <stdio.h>
#define MAX 300

int F31(int n, int c[MAX])
{
	for(int i =  0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(c[i] == c[j])
			{
				return i;
			}
		}
	}

	return -1;
}

int main()
{
	int len, temp;
	int A[MAX];

	for(len = 0 ; len < MAX; len++)
	{
		scanf_s("%d", &temp);
		if(temp == -1)
		{
			break;
		}
		A[len] = temp;
	}

	printf("Res: %d", F31(len, A));

	return 0;
}
