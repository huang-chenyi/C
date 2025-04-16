#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N = 50;
	int L = 60;
	int n = 150;
	int s = 80;
	float R2 = 10.0;
	int C2 = 20;
	float R1 = 2.5;
	float Uh[18] = {2080, 1000, 500, 0, -250, -450, -650, -1000, -2100, -1000, -500, 0, 250, 450, 650, 1000, 2080, 575};
	float Ub[18] = { 60, 50, 45, 38, 20, 0, -20, -40, -60, -50, -45, -38, -19, 0, 20, 41, 60, 18 };
	for (int i = 0; i < 18; i++) {
		float H[18];
		H[i] = (N * Uh[i]) / (L * R1);
		printf("H = %f\n", H[i]);
		float B[18];
		B[i] = (C2 * R2 * Ub[i]) / (n * s);
		printf("B = %f\n", B[i]);
	}
}