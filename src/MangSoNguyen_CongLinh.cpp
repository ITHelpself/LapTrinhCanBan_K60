#include <stdio.h>
#include <stdlib.h>
int Nhap(float **a)
{
    int n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	*a=(float*)calloc(n,sizeof(float));
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]:",i+1);
		scanf("%f",*a+i);
	}
	return n;
}
void Xuat(float *a, int n)
{
	printf("\nMang vua nhap vao la:");
	for(int i=0;i<n;i++)
		printf("\t%.2f",*(a+i));
}
int MaxDuong(float *a,int n, float *max)
{
	int dem=0;
	if(*a>0)
	  dem++;
	*max=-10;
	for(int i=0;i<n;i++)
	{
		if(*max<*(a+i) && *(a+i)>0)
			*max=*(a+i);
		if(*(a+i)>0)
		    dem++;	
	}
	if(dem==0)
	{
		printf("\nKhong co so duong trong day!");
		return 0;
	}
	else 
	{
		printf("\nSo duong lon nhat trong day la:%.2f",*max);
		if(dem==n)
		  return 1;
    }
}
int Fibo(float *a,int n)
{
	int dem=0;
	for(int i=2;i<n;i++)
	{
		if(*(a+i)==*(a+i-1)+*(a+i-2))
		    dem++;
	}
	if(dem==n-2)
	{
		printf("\nDay co tinh chat Fibonaccy! ");
		return 1;
	}
	else
	{
		printf("\nDay khong co tinh chat Fibonaccy! ");
		return 0;
	}
}
int Menu()
{
	
	float *a,*max;
	int n,key;
	printf("----------MENU----------");
	printf("\n1.Nhap day");
	printf("\n2.Xuat day");
	printf("\n3.Tim Max duong");
	printf("\n4.Kiem tra tinh Fibonaccy");
	printf("\n5.Thoat");
	printf("\n------------------------");
	for(;;)
	{
		printf("\nNhap lua chon cua ban:");
		scanf("%d",&key);
		switch(key)
		{
			case 1:
				n=Nhap(&a);
				break;
			case 2:
			    Xuat(a,n);
			    break;
			case 3:
			    MaxDuong(a,n,max);
				break;
			case 4:
			    Fibo(a,n);
				break;
			case 5:
			    free(a);
				exit(0);
			default: printf("Lua chon khong hop le, vui long nhap lai!");					
		}
	}

}
int main()
{
	Menu();
}