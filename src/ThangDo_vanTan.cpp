#include<stdio.h>
#define PI 3.141592654
// function declaration before main's function
void nhapDo(float &Do);
void chuyenDoSangRadian(float Do, float radian);
float tinhRadian(float Do, float radian);
void nhapRadian(float &radian);
void chuyenRadianSangDo(float Do, float radian);
float tinhDo(float Do, float radian);
int main(){
	float Do;
	float radian;
	nhapDo(Do);// call nhapDo's function in main's function
	chuyenDoSangRadian(Do, radian);
	nhapRadian(radian);
	chuyenRadianSangDo(Do, radian);
	return 0;
}
void nhapDo(float &Do){
	printf("\nNhap do = ");
	scanf("%f", &Do);
}
void chuyenDoSangRadian(float Do, float radian){
	radian = tinhRadian(Do, radian);
	printf(" %.f do chuyen sang radian = %10f", Do, radian);
}
float tinhRadian(float Do, float radian){
	radian = Do * PI / 180;
	return Do * PI / 180;	
}
void nhapRadian(float &radian){
	printf("\nNhap radian = ");
	scanf("%f", &radian);
}
void chuyenRadianSangDo(float Do, float radian){
	Do = tinhDo(Do, radian);
	printf(" %.f radian chuyen sang do = %.f", radian, Do);
}
float tinhDo(float Do, float radian){
	Do = radian * 180 / PI;
	return radian * 180 / PI;
}
int giaiThua(int a){
    if(a == 0){
        return 1;
    }   
    else{
        return a*giaiThua(a-1);
    }
}