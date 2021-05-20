#include<stdio.h>
#include<math.h>
int main(){
	int n,y;
	printf("Nhap n: ");
	scanf("%d",&n);
	y=0;
	while(n!=0){
		y=y*10 +  n%10;
		n=n/10;
	}
	printf("So nghich dao la:%d",y);
}
