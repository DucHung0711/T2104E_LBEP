#include<stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int a1=1,a2=1;
	if(n==0){
		printf("Khong co tiem can so Fibonacci ");
	}else{
		int i=3,a;
		while(i+a2<=n){
			a=a1+a2;
			a1=a2;
			a2=a;
			i++;		
		}
		printf("Tiem can so Fibonacci %d la %d",n,a);
	}	
}
