#include<stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int i=1;
	for(i>0;i<n;i++){
		if (i%2==0)
		printf("%d ",i);
	}
}
