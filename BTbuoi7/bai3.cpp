#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		printf("Nhap phan tu so a[%d] la:",i);
		scanf("%d",&a[i]);
	}
	int dem=0,demmax=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			dem++;
			if(dem>demmax){
				demmax=dem;
			}
		}else{
			dem=0;
		}
	}
	printf("Day so duong lien nhau nhieu nhat la %d",demmax);
}
	
