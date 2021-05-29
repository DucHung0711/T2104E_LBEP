#include<stdio.h>
#include<math.h>
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
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);	
	int hieuMin=abs(a[0]-x);
	int count=0;
	int b[n];
	for(i=0;i<n;i++){		
		if(abs(a[i]-x)<hieuMin){
			hieuMin=abs(a[i]-x);
		}
		
		if(abs(a[i]-x)==hieuMin){
			count++;
			count=a[i];
		}
	}
	if(count==0){
		printf("Mang khong co so x");
	}else{
		printf("So gan x nhat la %5d",count);
	}	
}
