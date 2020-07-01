#include<stdio.h>
void nhapSo(int &a, int &b);
void kiemTra(int a, int b);
int main(){
	int a, b;
	nhapSo(a, b);
	kiemTra(a, b);
	return 0;
}
void nhapSo(int &a, int &b){
	printf("\nNhap a = ");
	scanf("%d", &a);
	printf("\nNhap b = ");
	scanf("%d", &b);
}
void kiemTra(int a, int b){
	if(a == b)
		printf("\nHai so giong nhau");
	else
		printf("\nHai so khac nhau");
}