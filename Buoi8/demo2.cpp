#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		printf("Nhap phan tu so a[%d] la:",i);
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){//max la
			if(a[j]>a[j+1]){
				//thuat toan swap
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep");
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
}	
