typedef struct NgaySinh{
    int ngay, thang, nam;
}
typedef struct NhanVien
{
    char hoten[50];
    NgaySinh *ngaysinh;
    // ...
};
void nhapNhanVien(NhanVien *nhanvien);// định nghĩa
int main(){
    NhanVien *nhanvien;
    nhapNhanVien(nhanvien);
    return 0;
}
void nhapNhanVien(NhanVien *nhanvien){// xây dựng
    //...
}