#include<stdio.h>

int main(){
	int n[10];
	
	int dem=0;
	int i;
	for(i=0;i<10;i++){
		printf("Nhap phan tu thu %d la:",i);
		scanf("%d",&n[i]);// vl that
	}
	int sum=0;
	int x;
	printf("Nhap phan tu x:");
	scanf("%d",&x);
	for(i=0;i<10;i++){	
		if(n[i]==x){
			sum++;					
		}else{
			printf("Mang khong co so x \n");break;
		}
	}
	printf("Trong mang xuat hien x %d lan\n",sum);
	
}
