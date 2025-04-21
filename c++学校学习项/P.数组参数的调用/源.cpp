#include<stdio.h>

float Aver(float array[], int n)
{
	int i;
	float sum = 0;
	for (i = 0; i < n; i++)
		sum += array[i];
	return sum/n;
}

int main()
{
	int i;
	float a[10];
	for (i = 0; i < 10; i++)
		scanf_s("%f", &a[i]);
	printf("Æ½¾ùÖµ=%f\n", Aver(a, 10));
	return 0;
}