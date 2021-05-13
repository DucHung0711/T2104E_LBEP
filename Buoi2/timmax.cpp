#include<stdio.h>
int main(){;//Khai bao bien
int a,b,c;
	printf("Nhap so a:");
	scanf("%d",&a);
	printf("Nhap so b:");
	scanf("%d",&b);
	printf("Nhap so c:");
	scanf("%d",&c);
	// Dieu kien re nhanh
	if(a>b){
		//cac lenh khi YES
		if(a>c){
		printf("%d is max ",a);
		}else{
		printf("%d is max",c);
		}
	}else{
		if (b>c){
		printf("%d is max",b);
		}else{
		printf("%d is max",c);
		}
	}
}
