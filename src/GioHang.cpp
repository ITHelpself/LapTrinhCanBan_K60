#include<stdio.h>
typedef struct SanPham{
    char masanpham[256];
    int tenSanPham[256];
    int soluong;
    float dongia;
};
typedef struct ThoiGian{
    int ngay;
    int thang;
    int nam;
};
typedef struct GioHang{
    char magiohang[256];
    SanPham *sanpham;
    int soluongsanpham;
    ThoiGian *ngaytaogiohang;
};
void taoGioHang(GioHang *giohang);
int taoDanhSachGioHang(GioHang **danhsachgiohang);
void taoSanPham(SanPham *sanpham);// them mot san pham 
int timViTriGioHang(GioHang *danhsachgiohang, int soluong, GioHang *giohang);// tim kiem thong qua ma gio hang
void ThemSanPhamVaoGioHang(GioHang *danhsachgiohang,int soluong, SanPham *sanpham);
void XoaSanPhamRaGioHang(GioHang *danhsachgiohang,int soluong, SanPham *sanpham);
void menu(GioHang *giohang);
int main(){
    return 0;
}
// TODO: xây dung cac ham dua tren nguyen mau ham ben tren
