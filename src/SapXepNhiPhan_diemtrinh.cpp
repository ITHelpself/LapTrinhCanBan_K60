#include <stdio.h>
#define size 1000
void doiCho(int &a, int &b);
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void sapXepTangDan(int a[], int n);
void timKiemNhiPhan(int a[], int x, int left, int right);
int main() {
	int a[size], n, x;
	nhapMang(a, n);
	sapXepTangDan(a, n);
	printf("Tang dan: ");
	xuatMang(a, n);
	printf("Nhap x: ");
	scanf("%d", &x);
	timKiemNhiPhan(a, x, 0, n);
	return 0;
}
void nhapMang(int a[], int &n) {
	printf("Nhap n:");
	scanf("%d", &n);
	printf("nhap mang: ");
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
void xuatMang(int a[], int n) {
	for (int i=0; i<n; i++)
		printf ("%d ", a[i]);
	printf("\n");
}
void sapXepTangDan(int a[], int n) {
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[j] < a[i])
				doicho(a[i], a[j]);
		}
	}
}
void doiCho(int &a, int &b) {
	int temp = a;
	a = b; 
	b= temp;
}
void timKiemNhiPhan(int a[], int x, int left, int right) {
	if (left >= right)
		printf("Khong tim thay x!\n");
	else {
		int mid = (left + right)/2;
		if (a[mid]== x)
			printf("Phan tu %d o vi tri %d\n",x,mid);
		else if(x > a[mid])
			timKiemNhiPhan(a, x, mid+1, right);
		else if(x< a[mid])
			timKiemNhiPhan(a, x, left, mid-1);
	}
}