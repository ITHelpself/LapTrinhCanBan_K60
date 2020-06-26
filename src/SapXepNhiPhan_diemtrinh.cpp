#include <stdio.h>

#define size 1000

void doicho(int &a, int &b);
void nhapMang(int A[], int &n);
void xuatMang(int A[], int n);
void sapXepTangDan(int A[], int n);
void timKiemNhiPhan(int A[], int x, int left, int right);

int main() {
	int A[size], n, x;
	nhapMang(A, n);
	sapXepTangDan(A, n);
	printf("Tang dan: ");
	xuatMang(A, n);
	printf("Nhap x: ");
	scanf("%d", &x);
	timKiemNhiPhan(A, x, 0, n);
	return 0;
}
void nhapMang(int A[], int &n) {
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
void xuatMang(int A[], int n) {
	for (int i=0; i<n; i++)
		printf ("%d ", A[i]);
	printf("\n");
}
void sapXepTangDan(int A[], int n) {
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(A[j] < A[i])
				doicho(A[i], A[j]);
		}
	}
}
void doicho(int &a, int &b) {
	int temp = a;
	a = b; 
	b= temp;
}
void timKiemNhiPhan(int A[], int x, int left, int right) {
	if (left >= right)
		printf("Khong tim thay x!\n");
	else {
		int mid = (left + right)/2;
		if (A[mid]== x)
			printf("Phan tu %d o vi tri %d\n",x,mid);
		else if(x > A[mid])
			timKiemNhiPhan(A, x, mid+1, right);
		else if(x< A[mid])
			timKiemNhiPhan(A, x, left, mid-1);
	}
}