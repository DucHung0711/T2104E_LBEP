#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		
	}
	
	for(i=0;i<n;i++){
		printf("Nhap phan tu so a[%d] la: ",i);
		scanf("%d",&a[i]);
		int x,count=0;
		for(;count==0;){
			printf("Nhap phan tu x:");
			scanf("%d",&x);
			for(int j=i-1;j>=0;j--){
				if(x=a[j]){
					count++;
					break;
				}
			}
			if(count>0){
				printf("Trong mang co phan tu x");
				count=0;
			}else{
				a[i]=x;
				break;
			}
		}
	}
	printf("Cac so trong mang  sau khi nhap: ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
