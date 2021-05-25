
#include<stdio.h>

int main(){
	int n,b;
	printf("Nhap n:");
	scanf("%d",&n);
	int t;		
				
	for(int i=0;i<=n;i++){	
		t=i;
		int a=0;
		while(t>0){
			a=a*10 + t%10;
			t=t/10;			
		}
		printf("\nSo nghich dao la %d",a);				
	}
	
		


}
