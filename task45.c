#include <stdio.h>
#define MAX 300

int main()
{
        int temp, len = 0;
        int A[MAX], B[MAX];

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

        int max = A[0];

        for(int i = 0; i < len; i++)
        {
                if(A[i] > max)
                {
                        max = A[i];
		}
	}
        for(int i = 0; i < len; i++)
        {
		int k = 0;
                for(int j = 1; j < len; j++)
                {
			if(A[j] < A[k])
                        {
                        	k = j;
                        }
		}
                B[i] = A[k];
                A[k] = max + 1;
	}

        printf("Res: ");
        for(int i = 0; i < len; i++)
        {
                if(i != len - 1)
                {
                        printf("%d, ", B[i]);
                }
                else
                {
                        printf("%d. \n", B[i]);
                }
        }

        return 0;
}
