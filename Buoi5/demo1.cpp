#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	printf("Nhap n:");
	scanf("%d",&n);

	for(i=0;i<=n;i++){
		if (n % i == 0);{
		printf("\nUoc cua %d la: %d",n,i);
		}
	}	
}
