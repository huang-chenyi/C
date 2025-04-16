#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Man {
	char name[20];
	int age;
	char place[20];
}people[3];

int main() {
	printf("Please input a name:");
	scanf_s("%s", people[0].name, (unsigned)sizeof(people[0].name));
	printf("Please input anouther name:");
	scanf("%s", people[1].name);
	printf("The first person is: %s\n", people[0].name);
	printf("The second person is: %s", people[1].name);
}