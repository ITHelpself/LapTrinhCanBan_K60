#include <stdio.h>
#define size 1000
void hoanVi(int &a, int &b);
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void sapXepTangDan(int a[], int n);
bool tonTaiPhanTu(int a[], int x, int left, int right);// tồn tại phần tử x hay không?
void kiemTraPhanTuTonTai(int a[],int n, int x);
int main() {
	int a[size], n, x;
	nhapMang(a, n);
	sapXepTangDan(a, n);
	printf("Tang dan: ");
	xuatMang(a, n);
	printf("Nhap x: ");
	scanf("%d", &x);
	kiemTraPhanTuTonTai(a,n,x);
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
				hoanVi(a[i], a[j]);
		}
	}
}
void hoanVi(int &a, int &b) {
	int temp = a;
	a = b; 
	b= temp;
}
bool tonTaiPhanTu(int a[], int x, int left, int right) {
	if (left >= right)
		return false;
	else {
		int mid = (left + right)/2;
		if (a[mid]== x)
			return true;
		else if(x > a[mid])
			tonTaiPhanTu(a, x, mid+1, right);
		else if(x< a[mid])
			tonTaiPhanTu(a, x, left, mid-1);
	}
}
void kiemTraPhanTuTonTai(int a[],int n, int x){
	int left = 0;
	int right = n-1;
	bool cotontai = tonTaiPhanTu(a, x, left, right);
	if(cotontai){
		printf("\nCo phan tu %d trong mang",x);
	}
	else
	{
		printf("\nKhong co phan tu %d trong mang",x);
	}
	
}