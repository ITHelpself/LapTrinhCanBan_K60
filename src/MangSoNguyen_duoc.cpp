#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void nhapMang(int *a, int n);
void xuatMang(int *a, int n);
int timMax(int *a, int n);
void lietKeViTriMax(int *a,int n);
int timMin(int *a, int n);
void lietKeViTri(int *a, int n, int x);
void lietKeViTriMin(int *a,int n);
bool laSoNguyenTo(int n);
void lietKeSoNguyenTo(int *a, int n);
bool laMangDuong(int *a, int n);
bool laMangAm(int *a, int n);
bool laMangCapSoCong(int *a, int n);
void sapXepTangDan(int *a, int n);
int main(){
	int *a, n;
	printf("\nnhap so phan tu trong Mang:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	nhapMang(a,n);
	xuatMang(a,n);
	lietKeViTriMax(a,n);
	lietKeViTriMin(a,n);
	laSoNguyenTo(n);
	lietKeSoNguyenTo(a,n);
	laMangDuong(a,n);
	laMangAm(a,n);
	laMangCapSoCong(a,n);
	sapXepTangDan(a,n);
	free(a);
	return 0;
}
void nhapMang(int *a, int n){
	for(int i=0;i<n;i++){
		printf("\nphan tu thu a[%d]:",i);
		scanf("%d",(a+i));
	}
}
void xuatMang(int *a, int n){
	printf("\n\n a[]:");
	for(int i=0;i<n;i++){
		printf("\t%d",*(a+i));
	}
}
int timMax(int *a, int n){
	int max=*a;
	for(int i=1;i<n;i++){
		if(*(a+i)>max){
			max=*(a+i);
		}
	}
	return max;
}
void lietKeViTri(int *a, int n, int x){
	for(int i=0;i<n;i++){
		if(*(a+i)== x){
			printf("%d  ",i);
		}
	}
}
void lietKeViTriMax(int *a,int n){
	int max=timMax(a,n);
	printf("\nmax  = %d o cac vi tri: ",max);
    lietKeViTri(a,n,max);
}

int timMin(int *a, int n){
	int min=*a;
	for(int i=1;i<n;i++){
		if(*(a+i)<min){
			min=*(a+i);
		}
	}
	return min;
}
void lietKeViTriMin(int *a,int n){
	int min=timMin(a,n);
	printf("\min = %d o cac vi tri:  ",min);
    lietKeViTri(a,n,min);
}
void sapXepTangDan(int *a, int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(*(a+i)>*(a+j)){
				int b=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=b;
			}
		}
	}
	printf("\nMang sap xep tang la :");
	xuatMang(a,n);
}
bool laSoNguyenTo(int n){
	if(n<2){
		return false;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void lietKeSoNguyenTo(int *a, int n){
	printf("\ncac so nguyen to co trong Mang:");
	for(int i=0; i<n; i++){
		if(laSoNguyenTo(*(a+i))){
			printf("%d\t",*(a+i));
		}
	}
}
bool laMangDuong(int *a, int n){
	for(int i=0; i<n; i++){
		if(*(a+i)<0 ){
			return false;
		}
	}
	if(true){
		printf("\n\ntat ca phan tu trong Mang deu la so duong");
	}
	return 0;
}
bool laMangAm(int *a, int n){
	bool flag = false;
	for(int i=1; i<n; i++){
			if(*(a+i)>0 ){
			return flag;
		}
	}
	if(true){
		printf("\n\nMang toan so am");
	}
	return 0;
}
bool laMangCapSoCong(int *a, int n){
	int d=*(a+1)-*(a+0);
	for(int i=1; i<n; i++){
		if(*(a+i)!=*(a+0)+i*d){
			return false;
		}
	}
	if(true){
		printf("\n\nday vua nhap la 1 cap so cong ");
	}
	return 0;
}