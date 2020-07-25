#include <stdio.h>
#include <string.h>
typedef struct SinhVien{
    char ten[30];
    char gioiTinh[5];
    int tuoi;
    float diemToan, diemLy, diemHoa;
};
void nhap(SinhVien &sv);
void nhapDanhSachSinhVien(SinhVien a[], int n); 
void xuat(SinhVien sv);
void xuatDanhSachSinhVien(SinhVien a[], int n);
float tinhDiemTrungBinh(SinhVien &sv);
void sapXepSinhVienTheoDTB(SinhVien a[], int n);
SinhVien timKiemSinhVienDTBCaoNhat(SinhVien a[], int n);
void xuatSinhVienDTBCaoNhat(SinhVien a[], int n);
void timKiemSVTheoTen(SinhVien a[], int n);
void hoanVi(SinhVien &a, SinhVien &b);
int main(){
    int n;
    printf("\nnhap so luong sinh vien trong danh sach:");
    scanf("%d",&n);
    SinhVien a[n];
    nhapDanhSachSinhVien(a, n);
    sapXepSinhVienTheoDTB(a, n);
    xuatDanhSachSinhVien(a, n);
    xuatSinhVienDTBCaoNhat(a, n);
    timKiemSVTheoTen(a, n);
    return 0;
}
float tinhDiemTrungBinh(SinhVien &sv){
    return (sv.diemToan + sv.diemLy + sv.diemHoa)/3;    
}
void nhap(SinhVien &sv){
    fflush(stdin);
    printf("\nNhap ho ten: ");
    gets(sv.ten);
    printf("\nNhap gioi tinh: "); 
    gets(sv.gioiTinh);
    printf("\nNhap tuoi: "); 
    scanf("%d", &sv.tuoi);
    printf("\nNhap diem 3 mon: "); 
    scanf("%f%f%f", &sv.diemToan, &sv.diemLy, &sv.diemHoa);
}
void nhapDanhSachSinhVien(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
	nhap (a[i]);
    }
}
void xuat(SinhVien sv){
    float diemTrungBinh = tinhDiemTrungBinh(sv);
    printf("\nHo ten Sinh Vien: %s", sv.ten);
    printf("\nGioi tinh: %s", sv.gioiTinh);
    printf("\nTuoi: %d", sv.tuoi);
    printf("\nDiem Toan - Ly - Hoa: %.2f - %.2f - %.2f", sv.diemToan, sv.diemLy, sv.diemHoa);
    printf("\nDiem Trung Binh: %.2f", diemTrungBinh);
}
void xuatDanhSachSinhVien(SinhVien a[], int n){ 
    for(int i = 0;i < n; ++i){
        printf("\nThong tin Sinh Vien thu %d: ", i+1);
        xuat(a[i]);
    }
}
void hoanVi(SinhVien &a,SinhVien &b){
    SinhVien temp;
    temp = a;
    a = b;
    b = temp;
}
void sapXepSinhVienTheoDTB(SinhVien a[], int n){
    SinhVien temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(tinhDiemTrungBinh(a[i]) > tinhDiemTrungBinh(a[j])){
                hoanVi(a[i],a[j]);
            }
        }
    }
}
SinhVien timKiemSinhVienDTBCaoNhat(SinhVien a[], int n){
    sapXepSinhVienTheoDTB(a,n);
    return a[n-1];// sau khi sắp xếp, sinh viên có điểm tb cao nhất ở cuối
}
void xuatSinhVienDTBCaoNhat(SinhVien a[], int n){
    SinhVien sinhvientimkiem= timKiemSinhVienDTBCaoNhat(a,n);
    printf("\nSinh vien co DTB cao nhat la: %.2f", tinhDiemTrungBinh(sinhvien));
    int b;
    for(int i = 0; i < n; i++){
	if(tinhDiemTrungBinh(sinhvientimkiem) == tinhDiemTrungBinh(a[i])){
		b = i;
	}
    }
}
void timKiemSVTheoTen(SinhVien a[], int n){
    char timten[30];
    fflush(stdin);
    printf("\nNhap ten sinh vien can tim: "); 
    gets(timten);
    for(int i = 0; i < n; i++){
	if(strcmp(timten, a[i].ten)==0){
		printf("\nKet qua tim kiem sinh vien %s:", timten);
		xuat(a[i]);
        }
    }    
}

