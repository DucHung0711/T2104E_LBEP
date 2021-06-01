#include<stdio.h>
#define max 100
void nhapmang(int a[],int &n){
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu a[%d] la: ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[], int n){

	printf("Mang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%5d ",a[i]);		
	}
}
void timkiem(int a[], int n){
		int i,x,s1=0;
		printf("\nNhap x: ");
		scanf("%d",&x);
		for(i=0;i<n;i++){
			if(a[i]==x){
				printf("Trong mang co so %d",x);
				break;
			}
	}	
}
int main(){
	
//	int b[max],n,i;
//	nhapmang(b,n);
//	xuatmang(b,n);
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	timkiem(a,n);
//	if(timkiem(b,n)==i){
//		printf("%d co trong mang",i);
//	}else{
//		printf("%d khong co trong mang",i);
//	}
}
