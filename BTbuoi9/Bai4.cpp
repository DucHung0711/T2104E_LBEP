#include<stdio.h>
#include<math.h>
int ucln(int a,int b){
	int ucln;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0)
			ucln=i;
	}
	printf("\nUoc chung lon nhat hai so la %d",ucln);
}
void bcnn(int a,int b){
	int j;
	int bcnn;
	int c=ucln(a,b);
	for(j=1;j<=a*b;j++){
		if(j%a==0 && j%b==0){
			j=(a*b)/c;
			bcnn=j;
			break;
		}
	}
	printf("\nBoi chung nho nhat la %d",bcnn);
}
int main(){

	int a,b;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	ucln(a,b);
	bcnn(a,b);
}
