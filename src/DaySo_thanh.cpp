// tinh s= 1+2+3+...+n

#include<stdio.h>
#include<conio.h>
void nhap(int &n);
void xuat(int n);
int tinhF(int n);
int main(){
	int n;
	nhap(n);
	xuat(n);
	 return 0;
}

void nhap(int &n){
	printf("\n nhap n: ");
	scanf("%d",&n);
}

void xuat(int n){
    int tong = tinhF(n);
	printf("\n tong: %d",tong);
}

int tinhF(int n){
    int tong = 0;
	for(int i=0; i<=n;i++){// i là biến cục bộ
        tong +=i;
    }
    return tong;
}

// anh oi anh xem code giuo em vs.
// code no chay thi chay nhung ma k cho ra kq
