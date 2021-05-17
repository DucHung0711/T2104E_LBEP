#include<stdio.h>

int main(){
	int a,b,n;
	printf("Nhap so nguyen 4 chu so:");
	scanf("%d",&n);
	if(n<10000 && n>10){
		if(n>=0){
			b=n%10;
			a=a*10+b;
			n=n/10;			
		}else{
			printf("So nghich dao la:%d ",a);
		}
		if(n>=0){
			b=n%10;
			a=a*10+b;
			n=n/10;		
		}else{
			printf("So nghich dao la:%d ",a);
		}
		if(n>=0){
			b=n%10;
			a=a*10+b;
			n=n/10;			
		}else{
			printf("So nghich dao la:%d ",a);
		}
		if(n>=0){
			b=n%10;
			a=a*10+b;
			n=n/10;
			printf("So nghich dao la:%d ",a);
		}else{
			printf("So nghich dao la:%d ",a);
		}
	}else{
		printf("Nhap so co 4 chu so");
	}
}


