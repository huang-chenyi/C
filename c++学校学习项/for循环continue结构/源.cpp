#include<stdio.h>
int main()
{
	int sum, n, m;
	sum = 0;

	for (n = 0; n < 10; n++)
	{
		printf("������һ������:");

		scanf_s("%d", &m);

		if (m == 0)
			continue;

		sum = sum + m;
	}
	printf("%d", sum);

	return 0;
}