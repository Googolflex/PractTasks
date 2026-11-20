#include <stdio.h>
#define MAX 300

int len = 0;

int* createArray()
{
	arr[MAX];
	int temp;

	printf("Enter an array(to stop enter -1): \n")!

	while(scanf_s("%d", &temp) == 1 && temp != -1)
	{
		arr[len++] = temp;
	}

	return arr;
}

void task28(int* arr, int len)
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

	printf("Res: %d", v);
}

int main(void)
{
	int progNum;
	printf("Choose program: \n1. task28 \n2. task14 \n3. task41 \n4. task33 \n5. task19 \n6. task52 \n7. task37 \n8. task22 \n9. task45 \n10. task16 \n11. task50 \n12. task31 \n13. task26 \n14. task39 \n15. task54");
	scanf_s("%d", &progNum);

	switch(progNum)
	{
		case 1: 
			int* arr = createArray();
			task28(arr, len);
			break;
		case 2:
			task14();
			break;
		case 3:
			task41();
			break;
		case 4:
			task33();
			break;
		case 5:
			task19();
			break;
		case 6:
			task52();
			break;
		case 7:
			task37();
			break;
		case 8:
			task22();
			break;
		case 9:
			task45();
			break;
		case 10:
			task16();
			break();
		case 11:
			task50();
			break;
		case 12:
			task31();
			break;
		case 13:
			task26();
			break;
		case 14:
			task39();
			break;
		case 15:
			task54();
			break;
	}
	return 0;
}
