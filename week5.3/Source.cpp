#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter number : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (i % 4 == 0) {
			printf("%d ", i);
		}
	}
	
}