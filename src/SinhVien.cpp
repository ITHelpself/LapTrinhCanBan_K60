// định nghĩa 1 kiểu struct sinhvien
// nhập, xuất 1 sinh viên: họ tên, giới tính, điểm(toán,lí, hóa)
// tính điểm trung bình của sinh viên
// hàm: định nghĩa --> xây dựng --> gọi hàm
// thư viện hỗ trợ định nghĩa, xây dựng rồi. Chỉ cần gọi hàm
#include<stdio.h> 
#include<stdlib.h>// thu viện hỗ trợ cấp phát bộ nhớ
enum GioiTinh{
    NAM = 1,
    NU = 2
};// thiếu ;
typedef struct Diem{// định nghĩa kiểu dữ liệu Diem
    float toan;
    float ly;
    float hoa;
};
typedef struct SinhVien{
    char hoten[100];
    int gioitinh;// 1: nam, 2: nu, khac 1,2: khac
    Diem *diem;
};
void nhapSinhVien(SinhVien *sinhvien);
void xuatSinhVien(SinhVien *sinhvien);
float tinhDiemTrungBinh(SinhVien *sinhvien);
int main(){
    SinhVien *sinhvien;// dữ liệu để nhập 1 sinh viên là 1 sinh viên
    nhapSinhVien(sinhvien);// gọi hàm nhập sinh viên
    xuatSinhVien(sinhvien);// gọi hàm xuất
   return 0; 
}
void nhapSinhVien(SinhVien *sinhvien){// xây dựng hàm nhập sinh viên
    // gets thì thêm fflush
    fflush(stdin);// kiến thức thì bạn sử dụng google và đọc nhé
    printf("Nhap ho ten sinh vien: ");// gọi hàm printf
    gets(sinhvien->hoten);
    printf("Nhap gioi tinh: ");
    scanf("%d",&sinhvien->gioitinh);
    printf("Nhap diem:");
    printf("Diem toan: ");
    // lỗi này do không cấp phát bộ nhớ
    sinhvien->diem = (Diem*)(malloc(sizeof(Diem)));
    scanf("%f",&sinhvien->diem->toan);// lỗi logic dòng số 32, nhập xong bị đứng
    printf("Diem ly: ");// copy khi mình đã hiểu, nên copy của mình
    scanf("%f",&sinhvien->diem->ly);
    printf("Diem hoa: ");
    scanf("%f",&sinhvien->diem->hoa);
}
void xuatSinhVien(SinhVien *sinhvien){
    float diemtrungbinh = tinhDiemTrungBinh(sinhvien);
    printf("%s \t",sinhvien->hoten);
    if(sinhvien->gioitinh==NAM){// mỗi con số, kí tự cho vào kiểu enum
        printf("nam \t");  
    }
    else if(sinhvien->gioitinh==NU){// mỗi con số, kí tự cho vào kiểu enum
        printf("nu \t");  
    }
    else
    {
        printf("khac \t");  
    }
    // xuất thêm điểm trung bình

    printf("%.2f\t %.2f\t %.2f \t%.2f", sinhvien->diem->toan,sinhvien->diem->ly,sinhvien->diem->hoa, diemtrungbinh);
    
}
float tinhDiemTrungBinh(SinhVien *sinhvien){
    return (sinhvien->diem->toan + sinhvien->diem ->ly + sinhvien ->diem->hoa)/3;
}