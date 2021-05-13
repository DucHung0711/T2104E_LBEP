#include<stdio.h>
int main(){;//Khai bao bien
int num;
	printf("Nhap so num");
	scanf("%d",&num);
	// Dieu kien re nhanh
	if(num> 0){
		//cac lenh khi YES
		printf("%d Number is >0",num);
	}else{
		if (num==0){
		printf("%d Number is 0",num);
		}else{
		printf("%d Number is <0",num);
		}
	}
}
