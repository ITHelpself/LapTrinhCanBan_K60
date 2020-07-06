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
    ThoiGian *ngaytaogiohang;
};