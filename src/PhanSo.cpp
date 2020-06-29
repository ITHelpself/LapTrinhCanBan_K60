#include<stdio.h>
#include<stdlib.h>
typedef struct PhanSo{
    int tu;
    int mau;
};
int uocChungLonNhat(int a, int b);
void nhapPhanSo(PhanSo *phanso);
void nhapPhanSo(PhanSo *phanso1,PhanSo *phanso2);
void xuatPhanSo(PhanSo *phanso);
void rutGonPhanSo(PhanSo *phanso);
PhanSo* tongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatTongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
int main(){
    PhanSo *phanso1, *phanso2;
    phanso1 = (PhanSo*)(malloc(sizeof(struct PhanSo)));
    phanso2 = (PhanSo*)(malloc(sizeof(struct PhanSo)));
    nhapPhanSo(phanso1,phanso2);
    xuatTongPhanSo(phanso1,phanso2);
    return 0;
}
void nhapPhanSo(PhanSo *phanso){
    // nhập tử và mẫu
    printf("Tu so: ");
    scanf("%d",&phanso->tu);
    printf("Mau so: ");
    scanf("%d",&phanso->mau);
}
void nhapPhanSo(PhanSo *phanso1,PhanSo *phanso2){
    printf("\nPhan so thu 1:\n ");
    nhapPhanSo(phanso1);
    printf("\nPhan so thu 2: \n");
    nhapPhanSo(phanso2);
}
void xuatPhanSo(PhanSo *phanso){
    // rút gọn phân số
    rutGonPhanSo(phanso);
    // in phân số
    printf("%d/%d",phanso->tu, phanso->mau);
}
void rutGonPhanSo(PhanSo *phanso){
    // B1: tìm ước chung lớn nhất của tử và mẫu
    int uocchunglonnhat = uocChungLonNhat(phanso->tu,phanso->mau);
    // B2: rút gọn phân số
    phanso->tu = phanso->tu/uocchunglonnhat;
    phanso->mau = phanso->mau/uocchunglonnhat;
}
int uocChungLonNhat(int a, int b){// sử dụng đệ quy
     if (b == 0) return a;
    return uocChungLonNhat(b, a % b);
}
PhanSo* tongPhanSo(PhanSo *phanso1, PhanSo *phanso2){
    PhanSo *ketqua;
    ketqua = (PhanSo*)(malloc(sizeof(struct PhanSo)));
    ketqua->tu = phanso1->tu * phanso2->mau + phanso1->mau * phanso2->tu;
    ketqua->mau = phanso1->mau * phanso2->mau;
    return ketqua;
}
void xuatTongPhanSo(PhanSo *phanso1, PhanSo *phanso2){
    // tinh tong phan so
    PhanSo *tong = tongPhanSo(phanso1,phanso2);
    // xuat phan so
    xuatPhanSo(tong);
}