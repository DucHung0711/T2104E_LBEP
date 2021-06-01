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
		if(i>=1){
			int k=i-1;
			int tmp=a[i];
			while(k>=0&&tmp<a[k]){
				a[k+1]=a[k];
				k--;//de so sanh va doi sang cac vi tri khac
			}
			a[k+1]=tmp;
		}
		printf("Day vua nhap la\n");
		for(int j=0;j<=i;j++){
			printf("%5d",a[j]);
		}
		printf("\n");	
	}			
}
