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
	int dem=0,demmax=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			dem=dem+a[i];
			if(dem>demmax){
				demmax=dem;
			}	
		}else{
			dem=0;
		}
	}
	printf("Chuoi so duong cos tong lon nhat la %d",demmax);	
}
