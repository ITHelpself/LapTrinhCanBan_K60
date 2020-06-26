#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void nhapmang(int *a, int n);
void xuatmang(int *a, int n);
int timmax(int *a, int n);
void timvitrimax(int *a,int n);
int timmin(int *a, int n);
void timvitrimin(int *a,int n);
int kiemtrasonguyento(int n);
int lietkesonguyento(int *a, int n);
int kiemtramangsoduong(int *a, int n);
int kiemtramangsoam(int *a, int n);
int mangcapsocong(int *a, int n);
void sapxeptangdan(int *a, int n);
int main(){
	int *a, n;
	printf("\nnhap so phan tu trong mang:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	nhapmang(a,n);
	xuatmang(a,n);
	timmax(a,n);
	timvitrimax(a,n);
	timmin(a,n);
	timvitrimin(a,n);
	kiemtrasonguyento(n);
	lietkesonguyento(a,n);
	kiemtramangsoduong(a,n);
	kiemtramangsoam(a,n);
	mangcapsocong(a,n);
	sapxeptangdan(a,n);
	free(a);
	return 0;
}
void nhapmang(int *a, int n){
	for(int i=0;i<n;i++){
		printf("\nphan tu thu a[%d]:",i);
		scanf("%d",(a+i));
	}
}
void xuatmang(int *a, int n){
	printf("\n\n a[]:");
	for(int i=0;i<n;i++){
		printf("\t%d",*(a+i));
	}
}
int timmax(int *a, int n){
	int max=*(a+0);
	for(int i=1;i<n;i++){
		if(max<*(a+i)){
			max=*(a+i);
		}
	}
	return max;
}
void timvitrimax(int *a,int n){
	int vt=timmax(a,n);
	int dem=0;
	printf("\n\ngia tri lon nhat trong day la %d:",vt);
	for(int i=0;i<n;i++){
		if(*(a+i)==vt){
			dem++;
			printf("\n\nvi tri max trong mang la:%d",i);
		}
	}
	printf("\n\nco %d vi tri max",dem);
}

int timmin(int *a, int n){
	int min=*(a+0);
	for(int i=1;i<n;i++){
		if(min>*(a+i)){
			min=*(a+i);
		}
	}
	return min;
}
void timvitrimin(int *a,int n){
	int vt=timmin(a,n);
	int dem=0;
	printf("\n\ngia tri min trong day la:%d,",vt);
	for(int i=0;i<n;i++){
		if(*(a+i)==vt){
			dem++;
			printf("\n\nvi tri min trong mang la:%d",i);
		}
	}
	printf("\n\nco %d vi tri min",dem);
}
void sapxeptangdan(int *a, int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(*(a+i)>*(a+j)){
				int b=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=b;
			}
		}
	}
	printf("\nmang sap xep tang la :");
	xuatmang(a,n);
}
int kiemtrasonguyento(int n){
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
int lietkesonguyento(int *a, int n){
	printf("\ncac so nguyen to co trong mang:");
	for(int i=0; i<n; i++){
		if(kiemtrasonguyento(*(a+i))){
			printf("%d\t",*(a+i));
		}
	}
	return 0;
}
int kiemtramangsoduong(int *a, int n){
	for(int i=0; i<n; i++){
		if(*(a+i)<0 ){
			return false;
		}
	}
	if(true){
		printf("\n\ntat ca phan tu trong mang deu la so duong");
	}
	return 0;
}
int kiemtramangsoam(int *a, int n){
	bool flag = false;
	for(int i=1; i<n; i++){
			if(*(a+i)>0 ){
			return flag;
		}
	}
	if(true){
		printf("\n\nmang toan so am");
	}
	return 0;
}
int mangcapsocong(int *a, int n){
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