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
	
	int l=0,h=n-1;
	int s;
	printf("Nhap s:");
	scanf("%d",&s);
	int kt=0;// =1 la tim thay
	while(l<=h){
		int mid=(l+h)/2;
		if(s == a[mid]){
			kt=1;
			printf("Da tim thay vt %d",mid-1);
			break;
		}else if(s<a[mid]){
			h=mid-1;
		}else{
			l=mid+1;
		}
	}
	if(kt==0){
		printf("404 NOT FOUND");
	}
}
