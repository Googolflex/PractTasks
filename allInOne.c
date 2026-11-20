#include <stdio.h>
#define MAX 300

int len = 0;

int* createArray(int stopNum)
{
	static int arr[MAX];
	int temp;

	printf("Enter an array(to stop enter %d): \n", stopNum)!

	while(scanf_s("%d", &temp) == 1 && temp != stopNum)
	{
		arr[len++] = temp;
	}

	return arr;
}

void printArray(int* arr)
{
	printf("Res: ");
	for (int i = 0; i < len; i++)
	{
		if (i != len - 1)
		{
			printf("%d, ", A[i]);
		}
		else
		{
			printf("%d. \n", A[i]);
		}
	}
}

int task28(int* arr)
{
	int s = 0;
	int v = arr[0] + 1;

	do
	{
		s = 0;
		v--;
		for(int i = 0; i < len; i++)
		{
			if(arr[i] % v != 0)
			{
				s = 1;
				break;
			}
		}
	} while (s == 1 && v > 1);

	return v;
}

int task14(int num)
{
	int s = 0, k;

	for (int n = a; n != 0; n = n / 10)
	{
		k = n % 10;
		if (k > s)
		{
			s = k;
		}
	}

	return s;
}

int task41(int* arr)
{
	int k = 0, s = 0;

	for (int i = 0; i < len; i++)
	{
		if (arr[i] < 0)
		{
			k = 1;
			s = s + arr[i];
		}
	}

	return s;
}

void task33(int* arr)
{
	int s = 0, b = -1;

	for (int i = 0; i < len - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			int k;
			for (k = 2; i + k < len && arr[i] == arr[i + k]; k++) {}
			if (k > s)
			{
				s = k;
				b = i;
			}
		}
	}

	printf("Res: %d, start index: %d \n", s, b);
}

int* task19(int* arr)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < 0)
		{
			for (int j = i; j < len - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			len--;
			i--;
		}
	}

	return arr;
}

int task52(int* arr)
{
	int k = 0;

	for (int i = 0; i < len; i++)
	{
		if (arr[i] > arr[k])
		{
			k = i;
		}
	}

	return k;
}

int task37(int* res)
{
	int m, s = 0;
	for (int i = 0; i < len; i++)
	{
		m = 0;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] == arr[j])
			{
				m++;
			}
		}
		//m++;
		if (m > s)
		{
			s = m;
		}
	}

	return s;
}

int* task22()
{
	static int arr[MAX];
	int i = 0, v;

	printf("Enter max num: \n");
	scanf_s("%d", &v);

	for (int a = 2; a < v; a++)
	{
		int s = 0;
		for (int n = 2; n < a; n++)
		{
			if (a % n == 0)
			{
				s = 1;
				break;
			}
		}
		if (s == 0)
		{
			arr[i++] = a;
		}
	}
	arr[i] = 0;

	return arr;
}

int* task45()
{
	static int B[MAX];
	int* A = createArray(-1);

	int max = A[0];

	for (int i = 0; i < len; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
	}

	for (int i = 0; i < len; i++)
	{
		int k = 0;
		for (int j = 1; j < len; j++)
		{
			if (A[j] < A[k])
			{
				k = j;
			}
		}
		B[i] = A[k];
		A[k] = max + 1;
	}

	return B;
}

int* task16(int num)
{
	int n = num;
	int i;

	for (i = 0; n != 0; i++, n = n / 10) {}

	int arr[i];
	len = i;

	for (arr[i--] = -1, n = num; n != 0; n = n / 10)
	{
		arr[i] = n % 10;
		i--;
	}

	return arr;
}

int task50(int* arr)
{
	int s = 0, k = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < 0)
		{
			k = 1;
		}
		else
		{
			if (k == 1)
			{
				s++;
				k = 0;
			}
		}
	}

	return s;
}

void task31(int* arr)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] == arr[j])
			{
				return i;
			}
		}
	}

	return -1;
}

int* task26(int* arr)
{
	for (int i = 0; i < len; i++)
	{
		int s = 0;
		for (int m = 2; m < arr[i]; m++)
		{
			if (arr[i] % m == 0)
			{
				s = 1;
				break;
			}
		}
		if (s == 0)
		{
			for (int j = i; j < len - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			len--;
			i--;
		}
	}

	return arr;
}

int task39(int* arr)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < 0)
		{
			continue;
		}
		if (arr[i] == 0)
		{
			break;
		}
		s = s + arr[i];
	}

	return s;
}

int main(void)
{
	int progNum;
	printf("Choose program: \n1. task28 \n2. task14 \n3. task41 \n4. task33 \n5. task19 \n6. task52 \n7. task37 \n8. task22 \n9. task45 \n10. task16 \n11. task50 \n12. task31 \n13. task26 \n14. task39 \n15. task54 \n");
	scanf_s("%d", &progNum);

	switch(progNum)
	{
		case 1: 
			int* arr = createArray(-1);
			int res = task28(arr);
			printf("Res: %d \n", res);
			break;
		case 2:
			int num;
			printf("Enter num: \n");
			scanf_s("%d", &num);
			int res = task14(num);
			printf("Res: %d \n", res);
			break;
		case 3:
			int* arr = createArray(404);
			int res = task41(arr);
			printf("Res: %d \n", res);
			break;
		case 4:
			int* arr = createArray(-1);
			task33(arr);
			break;
		case 5:
			int* arr = createArray(-1);
			arr = task19(arr);
			printArray(arr);
			break;
		case 6:
			int* arr = createArray(-1);
			int res = task52(arr);
			printf("Max index: %d \n", res);
			break;
		case 7:
			int* arr = createArray(-1);
			int res = task37(arr);
			printf("Res: %d \n", res);
			break;
		case 8:
			int* arr = task22();
			printArray(arr);
			break;
		case 9:
			int* arr = task45();
			printArray(arr);
			break;
		case 10:
			printf("Enter num: \n");
			scanf_s("%d", &num);
			int* arr = task16(num);
			printArray(arr);
			break();
		case 11:
			int* arr = createArray(-1);
			int res = task50(arr);
			printf("Res: %d \n", res);
			break;
		case 12:
			int* arr = createArray(-1);
			int ras = task31(arr);
			printf("Res: %d \n", res);
			break;
		case 13:
			int* arr = createArray(-1);
			arr = task26(arr);
			printArray(arr);
			break;
		case 14:
			int* arr = createArray(-1);
			int res = task39();
			printf("Res: %d\n", res);
			break;
		case 15:
			task54();
			break;
	}

	return 0;
}
