//mảng, nhập mảng
// mảng, xuất mảng
#include<stdio.h>
#define MAX_SIZE 5
void nhapMang(int a[], int &n);
void xuatMang(int a[],int n);
void xuatMax(int a[],int n);
int timMax(int a[], int n);
int timMin(int a[], int n);
void lietKeViTri(int a[], int n, int x);// x có thể là max, x có thể là min,...
void lietKeViTriMax(int a[], int n);
void lietKeViTriMin(int a[], int n);
int main(){
    int a[MAX_SIZE];
    int n;
    nhapMang(a,n);
    xuatMang(a,n);
    xuatMax(a,n);
    lietKeViTriMax(a,n);
    lietKeViTriMin(a,n);
    return 0;
}
void nhapMang(int a[], int &n){
    int temp;
    printf("nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       printf("Nhap phan tu thu %d:",i);
       scanf("%d",&temp);
       a[i] = temp;
    }
}
void xuatMang(int a[], int n){
    for(int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void xuatMax(int a[],int n){
    // tim max
    int max = timMax(a,n);
    // in max
    printf("\nMax = %d ",max);
}
int timMax(int a[], int n){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}