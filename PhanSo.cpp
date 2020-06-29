#include<stdio.h>
typedef struct PhanSo{
    int tu;
    int mau;
};
int uocChungLonNhat(int a, int b);
void nhapPhanSo(PhanSo *phanso);
void xuatPhanSo(PhanSo *phanso);
void rutGonPhanSo(PhanSo *phanso);
int main(){
    PhanSo *phanso;
    nhapPhanSo(phanso);
    xuatPhanSo(phanso);
    return 0;
}
void nhapPhanSo(PhanSo *phanso){
    printf("Tu so: ");
    scanf("%d",&phanso->tu);
    printf("Mau so: ");
    scanf("%d",&phanso->mau);
}
void xuatPhanSo(PhanSo *phanso){
    // rút gọn phân số
    rutGonPhanSo(phanso);
    // in phân số
    printf("%d/%d",phanso->tu, phanso->mau);
}
void rutGonPhanSo(PhanSo *phanso){
    int uocchunglonnhat = uocChungLonNhat(phanso->tu,phanso->mau);
    phanso->tu = phanso->tu/uocchunglonnhat;
    phanso->mau = phanso->mau/uocchunglonnhat;
}
int uocChungLonNhat(int a, int b){// sử dụng đệ quy
     if (b == 0) return a;
    return uocChungLonNhat(b, a % b);
}