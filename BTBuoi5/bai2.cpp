#include<stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int i;
	int s=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("\nUoc cua %d la %d",n,i);
			s=s+i;
		}		
	}
	printf("\nTong cua cac uoc la %d",s);	
}
