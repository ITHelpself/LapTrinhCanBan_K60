#include <stdio.h>
#include <math.h>
#include<stdlib.h>
enum SoNghiem
{
    NGHIEM_PHAN_BIET = 2,
    NGHIEM_KEP = 1,
    VO_NGHIEM = 0
};
void nhapHeSo(float *a, float *b, float *c);
void giaiPhuongTrinhBacHai(float a, float b, float c, float *x1, float *x2, float *x, int *songhiem);
void xuatNghiem(float a, float b, float c);
int main()
{
    float *a, *b, *c;
    a = (float*)malloc(sizeof(float));
    b = (float*)malloc(sizeof(float));
    c = (float*)malloc(sizeof(float));
    nhapHeSo(a, b, c);
    xuatNghiem(*a, *b, *c);
    return 0;
}
void nhapHeSo(float *a, float *b, float *c)
{
    float temp;
    do
    {
        printf("\nNhap vao a = ");
        scanf("%f", &temp);
        *a = temp;
        if (*a == 0)
        {
            printf("\na = 0, nhập lại!");
        }
    } while (*a == 0);
    printf("\nNhap vao b = ");
    scanf("%f", &temp);
    *b = temp;
    printf("\nNhap vao c = ");
    scanf("%f", &temp);
    *c = temp;
}
void giaiPhuongTrinhBacHai(float a, float b, float c, float *x1, float *x2, float *x, int *songhiem)
{
    float delta = pow(b, 2) - 4 * a * c; // b*b == pow(b,2);
    if (delta < 0)
    {
        *songhiem = VO_NGHIEM;
    }
    else if (delta == 0)
    {
        *songhiem = NGHIEM_KEP;
        *x = -b / (2 * a);
    }
    else
    {
        *songhiem = NGHIEM_PHAN_BIET;
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    }
}
void xuatNghiem(float a, float b, float c)
{
    float *x, *x1, *x2;
    int *songhiem;
    x = (float*)(malloc(sizeof(float)));
    x1 = (float*)(malloc(sizeof(float)));
    x2 = (float*)(malloc(sizeof(float)));
    songhiem = (int*)(malloc(sizeof(int)));
    giaiPhuongTrinhBacHai(a, b, c, x1, x2, x, songhiem);
    if (*songhiem == VO_NGHIEM)
    {
        printf("\n Phuong trinh vo nghiem!");
    }
    else if (*songhiem == NGHIEM_KEP)
    {
        printf("\n Phuong trinh co mot nghiem kep: x = %.2f",x);
    }
    else
    {
        printf("\n Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f",*x1,*x2);
    }
}
