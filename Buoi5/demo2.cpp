#include<stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int a1=1,a2=1;
	if(n==1 || n==2){
		printf("So Fibonacci la 1",n);
	}else{
		int i=3,a;
		while(i<=n){
			a=a1+a2;
			a1=a2;
			a2=a;
			i++;		
		}
		printf("So Fibonacci la %d",a);
	}	
}
