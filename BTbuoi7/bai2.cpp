#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		printf("Nhap phan tu so %d la: ",i);
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("So nho nhat trong mang la %d \n",min);
}
