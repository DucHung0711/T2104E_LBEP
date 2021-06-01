#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	int i,j,x;
	printf("Nhap phan tu thu a[0] ");
	scanf("%d",&a[0]);
	i=1;
	while(i<n){
		printf("Nhap phan tu thu a[%d] la: ",i);
		scanf("%d",&x);
		int nhaplai=0;//=1 la phai nhap lai,=0 trong mang chua co phan tu
		for(j=0;j<i;j++){
			if(a[j]==x){
				printf("So da xuat hien trong mang \nNhaplai: ");
				nhaplai=1;
				break;
			}				
		}
		if(nhaplai!=1){
				a[i]=x;
				i++;
			}
	}
	printf("Day vua nhap la:");
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
}
