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
	
	int j;
	int bcnn;
	for(j=1;j<=a*b;j++){
		if(j%a==0 && j%b==0){
			j=(a*b)/ucln;
			bcnn=j;
			break;
		}
	}
	printf("\nBoi chung nho nhat la %d",bcnn);
}
