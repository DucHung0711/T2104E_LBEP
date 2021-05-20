#include<stdio.h>

int main(){
	float s,n,i;	
	printf("Nhap n:");
	scanf("%f",&n);
	i = 1;
	while(i<=n){
		s = s  + (1/(i));
		i = i + 1;
	}
	printf("So S = %0.4f ",s);
}
