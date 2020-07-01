#include<stdio.h> 
#include<stdlib.h>
typedef struct Diem{
    float toan;
    float ly;
    float hoa;
};
typedef struct HocSinh{
    char hoten[100];
    Diem *diem;
};
void nhapHocSinh(HocSinh *hocsinh);
void xuatHocSinh(HocSinh *hocsinh);
float tinhDiemTrungBinh(HocSinh *hocsinh);
int main(){
    HocSinh *hocsinh;
    hocsinh=(HocSinh*)malloc(sizeof(HocSinh));
    nhapHocSinh(hocsinh);
    xuatHocSinh(hocsinh);
    free(hocsinh);
    return 0; 
}
void nhapHocSinh(HocSinh *hocsinh){
    fflush(stdin);
    printf("Nhap ho ten hoc sinh: ");
    gets(hocsinh->hoten);
    printf("Nhap diem toan: ");
    hocsinh->diem = (Diem*)(malloc(sizeof(Diem)));
    scanf("%f",&hocsinh->diem->toan);
    printf("Nhap diem ly: ");
    scanf("%f",&hocsinh->diem->ly);
    printf("Nhap diem hoa: ");
    scanf("%f",&hocsinh->diem->hoa);
}
void xuatHocSinh(HocSinh *hocsinh){
    float diemtrungbinh = tinhDiemTrungBinh(hocsinh);
    printf("\nHo ten: %s", hocsinh->hoten);
    printf("\nDiem toan: %.2f", hocsinh->diem->toan);
    printf("\nDiem ly: %.2f", hocsinh->diem->ly);
    printf("\nDiem hoa: %.2f", hocsinh->diem->hoa);
    printf("\nDiem trung binh: %.2f", diemtrungbinh);  
}
float tinhDiemTrungBinh(HocSinh *hocsinh){
    int somon = 3;
    return (hocsinh->diem->toan + hocsinh->diem ->ly + hocsinh->diem->hoa)/somon;
}