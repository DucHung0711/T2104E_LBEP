#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	int i;
	int ucln;
	for(i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0)
			ucln=i;
	}
	printf("\nUoc chung lon nhat hai so la %d",ucln);
}
