#include<stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int i,j;
	for(i=1;i<=n;i++){
		if(n%i==0){
			int count=0;
			for(j=1;j<=i;j++){
				if(i%j==0){
					count++;
				}				
			}
			if(count==2){
				printf("\nUoc nguyen to cua %d la %d",n,i);		
			}
		}
	}
}
