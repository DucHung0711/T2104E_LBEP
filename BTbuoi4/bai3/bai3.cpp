#include<stdio.h>

int main(){
	float n,i;
	printf("Nhap n:");
	scanf("%f",&n);
	i = 1;
	float s;
	s = 1;
	while(i<=n){
		s= s * i;
		i= i + 1;
	}
	printf("So S = %0.2f ",s);
}
