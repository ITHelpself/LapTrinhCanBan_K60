#include <stdio.h>
#include <math.h>
void nhapSo(float &a, float &b, float &c);
void kiemTraNghiemPhuongTrinh(float a, float b, float c);
int main()
{
	float a, b, c; 
	nhapSo(a, b, c);
	kiemTraNghiemPhuongTrinh(a, b, c);
	return 0;
}
void nhapSo(float &a, float &b, float &c){
	printf("\nNhap vao a = ");
	scanf("%f", &a);
	printf("\nNhap vao b = ");
	scanf("%f", &b);
	printf("\nNhap vao c = ");
	scanf("%f", &c);
}
void kiemTraNghiemPhuongTrinh(float a, float b, float c){
	if (a == 0)
	{
		if (b == 0) 
		{
			if (c == 0)
				printf("\nPhuong trinh co vo so nghiem");
			else
				printf("\nPhuong trinh vo nghiem");
		}
		else
		{

			float x = -c / b;

			printf("\nPhuong trinh co nghiem duy nhat x = %.3f", x);
		}
	}
	else
	{
		float Denta = b * b - 4 * a * c;

		if (Denta < 0)
		{
			printf("\nPhuong trinh vo nghiem");
		}
		else if (Denta == 0)
		{
			float x = -b / (2 * a);

			printf("\nPhuong trinh co nghiem kep x1 = x2 = %.3f", x);
		}
		else 
		{
			float x1 = (-b + sqrt(Denta)) / (2 * a);
			float x2 = (-b - sqrt(Denta)) / (2 * a);

			printf("\nPhuong trinh co 2 nghiem phan biet:\nx1 = %.3f\nx2 = %.3f", x1, x2);

		}
	}
	
}