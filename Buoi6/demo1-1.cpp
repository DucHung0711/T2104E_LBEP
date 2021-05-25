#include<stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("So nguyen to nho hon %d \n",n);
	int i,j;	
	for(j=2;j<n;j++){
		int count=0;
		for(i=1;i<=n;i++){
			if(j%i==0)
				count++;		
		}
		if(count==2)
		printf(" %d la so nguyen to\n",j);
	}
			
}
