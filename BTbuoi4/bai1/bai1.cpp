#include<stdio.h>

int main(){
	float s,n,i;
	printf("Nhap n:");
	scanf("%f",&n);
	while(i<=n){
		s= s+ i;
		i= i+ 1;
	}
	printf("So S = %ld ",s);
}
