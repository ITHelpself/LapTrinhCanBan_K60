// tinh s= 1+2+3+...+n

#include<stdio.h>
#include<conio.h>
void nhap(int n);
void xuat(int n);
int tinhF(long s);
int main(){
	int n;
	long s=0;
	nhap(n);
	xuat(n);
	tinhF(s);
	 return 0;
}

void nhap(int n){
	printf("\n nhap n: ");
	scanf("%d",&n);
}

void xuat(int n){
	printf("\n so phan tu n la: %d",n);
}

int tinhF(long s){
    int n;
	for(int i; i<n;i++){// i là biến cục bộ
	printf("\n tong cua day so co %d phan tu la %ld" ,n ,s);}
}

// anh oi anh xem code giuo em vs.
// code no chay thi chay nhung ma k cho ra kq
