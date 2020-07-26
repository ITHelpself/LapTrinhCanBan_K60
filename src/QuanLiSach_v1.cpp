#include<stdio.h>
typedef struct Sach{
    int id;
    char name[30];
};
void nhapSach(Sach *sach);// nhap 1 cuon sach
void nhapSach(int *n, Sach *&sach);// nhap danh sach sach
void xuatSach(int n, Sach sach[]);
int main(){
    Sach *sach;
    int n;
    nhapSach(&n,sach);
    xuatSach(n,sach);
}
void nhapSach(Sach *sach){
        printf("Nhap id: ");
        scanf("%d",&(sach->id));
}
void nhapSach(int *n, Sach *&sach){
    printf("nhap n:");
    scanf("%d",n);
    sach= new Sach[*n];
    for(int i=0;i<*n;i++){
        printf("Nhap id: ");
        scanf("%d",&(sach+i)->id);
        fflush(stdin);
        printf("Nhap name: ");
        gets(&*(sach+i)->name);
    }
}
void xuatSach(int n, Sach sach[]){
    for(int i=0;i<n;i++){
        printf("%d\t %s\n",sach[i].id, sach[i].name);
    }
}