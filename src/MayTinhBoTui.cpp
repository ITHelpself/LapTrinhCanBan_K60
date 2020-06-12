// biến chứa giá trị: khai báo biến --> thay đổi giá trị của biến --> sử dụng giá trị của biến
// hàm: định nghĩa hàm --> xây dựng hàm --> gọi hàm (nhớ thứ tự viết nhé!)
#include<stdio.h>
#include<math.h>
void nhapSo(int &a, int &b);// định nghĩa hàm
void xuatTong(int a, int b);
int tinhTong(int a, int b);
void xuatHieu(int a, int b);
int tinhHieu(int a, int b);
void xuatTich(int a, int b);
int tinhTich(int a, int b);
void xuatThuong(int a, int b);
float tinhThuong(int a, int b);
void xuatMu(int a, int b);
float tinhMu(int a, int b);
int main(){
    int a,b;// khai báo biến
    nhapSo(a,b);// gọi hàm nhap de thay đổi giá trị của a,b
    xuatMu(a,b);// sử dụng a,b de xuat mu
    return 0;
}
void nhapSo(int &a, int &b){// xây dựng hàm xong
    printf("Nhap 2 so a,b: ");
    scanf("%d%d",&a,&b);
}
void xuatTong(int a, int b){
    // tinh tong
    int tong = tinhTong(a,b);
    // in tong
    printf("Tong = %d",tong);
}
int tinhTong(int a, int b){
    return a+b;
}
void xuatHieu(int a, int b){
    int hieu = tinhHieu(a,b);
    printf("Hieu = %d",hieu);
}
int tinhHieu(int a, int b){
    return a-b;
}
void xuatTich(int a, int b){
    int tich = tinhTich(a,b);
    printf("Tich = %d",tich);
}
int tinhTich(int a, int b){
    return a*b;
}
void xuatThuong(int a, int b){
    float thuong = tinhThuong(a,b);
    printf("Thuong = %.2f", thuong);
}
float tinhThuong(int a, int b){
    return (float)a/b;
}
void xuatMu(int a, int b){
    float mu = pow(a,b);
    printf("a^b = %.0f",mu);
}