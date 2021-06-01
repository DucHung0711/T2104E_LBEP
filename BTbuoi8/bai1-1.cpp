#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		printf("Nhap phan tu so a[%d] la: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		int x;
		printf("Nhap x: ");
		scanf("%d",&x);
		int max=x;
		for(i=0;i<n;i++){
			if(a[i]<x);
				max=a[i];
				break;
		}
		if(max==x){
			printf("Khong co so nho hon");
		}else{
			for(i=0;i<n;i++){
				if(a[i]>max && a[i]<x)
					max=a[i];
			}
		}
		printf("Tiem can duoi cua %d la %d",x,max);
	}
	
}
