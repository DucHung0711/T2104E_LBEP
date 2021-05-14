#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,p,s;
	printf("Nhap so a:");
	scanf("%f",&a);
	printf("Nhap so b:");
	scanf("%f",&b);
	printf("Nhap so c:");
	scanf("%f",&c);
	if(a>0 && b>0 && c>0){
		if(a+b>c && a+c>b && b+c>a){
			d = a + b + c;
			printf("\nChu vi tam giac d = %0.2f",d);
			p = d / 2;
			s =	sqrt(p*(p-a)*(p-b)*(p-c));			
			printf("\nDien tich tam giac s = %0.2f",s);
		}else{
			printf("a,b,c khong là 3 canh cua tam giac");	
		}			
	}else{
		printf("Nhap ba so duong");
	}		
}

