#include<stdio.h>
int det(int a, int b, int e, int f, int g, int h, int i, int j, int k);
void inverse(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
int AxB(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r);
int A[9], B[9], C[9], D[9], E[9], Det, a, b, c, d, e, f;
int main() {
	printf("\033[1;32m");
	printf("Enter matrix A\n");
	printf("\033[0m");
	for (int i = 0; i < 9; i++) {
		scanf_s("%d", &A[i]);
	}
	printf("\033[1;32m");
	printf("\nEnter matrix B\n");
	printf("\033[0m");
	for (int i = 0; i < 9; i++) {
		scanf_s("%d", &B[i]);
	}
	printf("\n");
	AxB(A[0], A[1], A[2], A[3], A[4], A[5], A[6], A[7], A[8], B[0], B[1], B[2], B[3], B[4], B[5], B[6], B[7], B[8] );
	det(C[0], C[1], C[2], C[3], C[4], C[5], C[6], C[7], C[8]);
	inverse(C[0], C[1], C[2], C[3], C[4], C[5], C[6], C[7], C[8], Det);
	printf("\n");
}
int AxB(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r) {
	C[0] = (a * j) + (b * m) + (c * p);
	C[1] = (a * k) + (b * n) + (c * q);
	C[2] = (a * l) + (b * o) + (c * r);
	C[3] = (d * j) + (e * m) + (f * p);
	C[4] = (d * k) + (e * n) + (f * q);
	C[5] = (d * l) + (e * o) + (f * r);
	C[6] = (g * j) + (h * m) + (i * p);
	C[7] = (g * k) + (h * n) + (i * q);
	C[8] = (g * l) + (h * o) + (i * r);
	printf("\033[1;32m");
	printf("AxB is \n\n");
	printf("\033[0m");
	printf("\033[1;34m");
	for (int i = 0; i < 9; i++) {
		if (i == 3 || i == 6) {
			printf("\n");
		}
		printf("%d ", C[i]);
	}
	printf("\033[0m");
	return C[0], C[1], C[2], C[3], C[4], C[5], C[6], C[7], C[8];
}//			0		1	 2		3		4	  5		6		7		8
int det(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
	int l1, m1, n1, o1, p1, q1;
	l1 = a * e * i;	
	m1 = b * f * g;	
	n1 = c * d * h;
	o1 = g * e * c;	
	p1 = h * f * a;
	q1 = i * d * b;	
	Det = l1 + m1 + n1 - o1 - p1 - q1;
	printf("\033[1;32m");
	printf("\n\nDeterminant is ");
	printf("\033[0m");
	printf("\033[1;34m");
	printf("%d\n\n", Det);
	printf("\033[0m");
	return Det;
}
void inverse(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
	D[0] = (e * i) - (h * f);
	D[3] = ((d * i) - (g * f)) * (-1);
	D[6] = (d * h) - (g * e);
	D[1] = ((b * i) - (h * c)) * (-1);
	D[4] = (a * i) - (g * c);
	D[7] = ((a * h) - (g * b)) * (-1);
	D[2] = (b * f) - (c * e);
	D[5] = ((a * f) - (d * c)) * (-1);
	D[8] = (a * e) - (d * b);
	for (int i = 0; i < 9; i++) {
		E[i] = (D[i]) * j;
	}
	printf("\033[1;32m");
	printf("\nInverse of AxB is\n");
	printf("\033[0m");
	printf("\033[1;34m");
	for (int i = 0; i < 9; i++) {
		if (i == 3 || i == 6) {
			printf("\n");
		}
		printf("%d ", E[i]);
	}
	printf("\033[0m");
}