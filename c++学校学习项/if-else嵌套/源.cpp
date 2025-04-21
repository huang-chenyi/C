#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;

	double x1, x2, d;

	scanf("%d%d%d", &a, &b, &c);

	d = (b * b - 4 * a * c);

	if (d < 0)
		printf("ÎÞÊµ¸ù");
	else
		if (d == 0)
			printf("%6.2f\n", -b / (2.0 * a));
		else
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("%6.2f,%6.2f", x1, x2);
		}
	return 0;

}