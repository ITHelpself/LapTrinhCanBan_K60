#include<stdio.h>
void nhapVND(float &vnd, float &giatriquydoi);
void xuatUSD(float vnd, float giatriquydoi);
float tinhUSD(float vnd, float giatriquydoi);
int main(){
	float vnd, giatriquydoi;	
	nhapVND(vnd, giatriquydoi);
    xuatUSD(vnd, giatriquydoi);
	return 0;
}
void nhapVND(float &vnd, float &giatriquydoi){
	printf("\nNhap vnd: ");
	scanf("%f", &vnd);
	printf("\nNhap gia tri quy doi: ");
	scanf("%f", &giatriquydoi);
}
void xuatUSD(float vnd, float giatriquydoi){
	float usd = tinhUSD(vnd, giatriquydoi);
	printf("%.2f vnd = %.2f usd", vnd, usd);
}
float tinhUSD(float vnd, float giatriquydoi){
	return vnd * giatriquydoi;
}