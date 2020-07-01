// thang đo
#include<stdio.h>
#define PI 3.141592654
void nhapDo(float &a);
void chuyenDoSangRadian(float a);
float tinhRadian(float a);
void nhapRadian(float &radian);
void chuyenRadianSangDo(float a);
float tinhDo(float radian);
int main(){
	float a;
    float radian;
	nhapDo(a);
	chuyenDoSangRadian(a);
	nhapRadian(radian);
	chuyenRadianSangDo(a);
	return 0;
}
void nhapDo(float &a){
	printf("\nNhap a = ");
	scanf("%f", &a);
}
void chuyenDoSangRadian(float a){
	float radian = tinhRadian(a);
	printf(" %.f a chuyen sang radian = %10f", a, radian);
}
float tinhRadian(float a){
	return a * PI / 180;	
}
void nhapRadian(float &radian){
	printf("\nNhap radian = ");
	scanf("%f", &radian);
}
void chuyenRadianSangDo(float radian){
	float a = tinhDo(radian);
	printf(" %.f radian chuyen sang a = %.f", radian, a);
}
float tinhDo(float radian){
	return radian * 180 / PI;
}