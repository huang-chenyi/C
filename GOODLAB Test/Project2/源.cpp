#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n = 5;
	decompose(n);
}

int decompose(int n) {
	int number = 1;
	while (n > number) {
		number *= 2;
		// n = 7时，number乘到8，则最大为number / 2 = 4
	}
	number /= 2;

	int temp = 0;
	temp = n - number;
	while (number > 0) {

		if (temp != 1) {
			
			temp = ;
		
		}
	}
}