#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap so a:");
	scanf("%d",&a);
	printf("Nhap so b:");
	scanf("%d",&b);
	printf("Nhap so c:");
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			printf("%d is Min",a);
		}else{
			printf("%d is Min",c);	
		}
	}else{
		if(b<c){
			printf("%d is Min",b);	
		}else{
			printf("%d is Min",c);	
		}
	}			
}
