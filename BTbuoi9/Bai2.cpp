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
void ktrale(int a[],int n){
	int i,x;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%5d",a[i]);
		
		}
	}	
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	ktrale(a,n);
}
