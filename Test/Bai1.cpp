#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,p,s;
	printf("Nhap so a:");
	scanf("%f",&a);
	printf("Nhap so b:");
	scanf("%f",&b);
	printf("Nhap so c:");
	scanf("%f",&c);
	if(a>0 && b>0 && c>0){
		while(a+b<=c || a+c<=b || b+c<=a){
			printf("Ba canh khong tao thanh tam giac\n");
			printf("\nNhap a:");
			scanf("%f",&a);
			printf("Nhap b:");
			scanf("%f",&b);
			printf("Nhap c:");
			scanf("%f",&c);
		}
		p = (a + b + c) / 2;
		s =	sqrt(p*(p-a)*(p-b)*(p-c));			
		printf("\nDien tich tam giac s = %0.2f",s);
	}else{
		printf("Nhap ba so duong");
	}
}
