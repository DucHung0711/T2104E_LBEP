#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,delta,x,x1,x2;
	printf("Nhap so a:");
	scanf("%f",&a);
	printf("Nhap so b:");
	scanf("%f",&b);
	printf("Nhap so c:");
	scanf("%f",&c);
	if(a==0){//pt bac 1
		if(b==0&&c==0){
			printf("Phuong trinh vo so nghiem");
		}else if(b==0&&c!=0){
			printf("Phuong trinh vo nghiem");
		}else{
			x = -c / b;
			printf("Phuong trinh co 1 nghiem x = %0.2f",x);
		}
	}else{//pt bac 2
		delta = b*b - 4*a*c;
		if(delta<0){
			printf("Phuong trinh vo nghiem");
		}else if(delta==0){
			x1 = -b/(2*a);
			printf("Phuong trinh co 1 nghiem x = %0.2f",x1);
		}else{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("\nPhuong trinh co nghiem x1 = %0.2f",x1);
			printf("\nPhuong trinh co nghiem x2 = %0.2f",x2);
		} 
	}
}
