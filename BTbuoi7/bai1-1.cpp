#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		printf("Nhap phan tu a[%d] la: ",i);
		scanf("%d",&a[i]);
	}
	int dem=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			dem=a[i];
		}
	}
	if(dem==0){
		printf("Mang khong co so le");
	}else{
		printf("So le cuoi cung la %d ",dem);
	}
		
}
