#include<stdio.h>

int main(){
	int n;
	for(;n<2 || n>99;){
		printf("Nhap so phan tu trong mang :");
		scanf("%d",&n);
	}
	int i;
	int a[n];
	for(i=0;i<n;i++){
			printf("Nhap phan tu thu %d la: ",i);
			scanf("%d",&a[i]);
		}
			
	int dem=0;
	for(i=n-1;i<n;i--){
		if(a[i]%2!=0){
			dem=a[i];break;
		}		
	}
	printf("So le cuoi cung trong mang la %d",dem);
}

