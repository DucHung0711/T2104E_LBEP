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
	int m;
	printf("Nhap so phan tu mang dem :");
	scanf("%d",&m);
	int sum;
	int j;
	int dem[j];
	int max = dem[0];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i]>0){
				a[i]<0;break;
				sum++;
				dem[0]=sum;
			}
		if(dem[j]>max)
			max=dem[j];
		}	
	}
	printf("Chuoi so duong nhieu nhat la %d ",max);
}
