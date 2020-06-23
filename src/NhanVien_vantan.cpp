#include<stdio.h> 
#include<stdlib.h>
enum GioiTinh{
    NAM = 1,
    NU = 2
};
typedef struct NhanVien{
    char hoten[100];
    int tuoi;
    int gioitinh;
    int hesoluong;
    int thoigianlamviec;
};
void nhapNhanVien(NhanVien *nhanvien);
void xuatNhanVien(NhanVien *nhanvien);
int tinhLuongNhanVien(NhanVien *nhanvien);     								
int main(){
    NhanVien *nhanvien;
    nhanvien=(NhanVien*)(malloc(sizeof(NhanVien)));
    nhapNhanVien(nhanvien);
    xuatNhanVien(nhanvien);
    return 0; 
}
void nhapNhanVien(NhanVien *nhanvien){
    printf("Nhap ho ten nhan vien: ");
    fflush(stdin);
    gets(nhanvien->hoten);
    printf("Nhap tuoi: ");
    scanf("%d", &nhanvien->tuoi);
    printf("Nhap gioi tinh: ");
    scanf("%d", &nhanvien->gioitinh);
    printf("Nhap he so luong: ");
    scanf("%d", &nhanvien->hesoluong);
    printf("Nhap thoi gian lam viec: ");
    scanf("%d", &nhanvien->thoigianlamviec);
}    			
				
void xuatNhanVien(NhanVien *nhanvien){
    int luong; 
    printf("%s\t", nhanvien->hoten);
    printf("%d\t", nhanvien->tuoi);
    if(nhanvien->gioitinh==NAM){
        printf("nam \t");  
    }
    else if(nhanvien->gioitinh==NU){
        printf("nu \t");  
    }
    else
    {
        printf("khac \t");
		printf("\n");  
    } 
    luong=tinhLuongNhanVien(nhanvien);// khai báo sau { 
	  printf("\t"); 
        printf("%d", luong);
}
int tinhLuongNhanVien(NhanVien *nhanvien){
    int luong = nhanvien ->hesoluong * nhanvien ->thoigianlamviec;
    return luong;
}	
