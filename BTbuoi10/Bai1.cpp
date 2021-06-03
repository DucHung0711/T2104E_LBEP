#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int timmax(int a[], int n){
	int *max=a;
	int i;
	for(i=0;i<n;i++){
		if(*max<*(max+i))
			*max=*(max+i);
	}
	return *max;
}
void sapxep(int a[],int n){
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+j)<*(a+i)){
				int temp=*(a+j);
				*(a+j)=*(a+i);
				*(a+i)=temp;
			}
		}
	}
	printf("Mang sau khi sap xep la: ");
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
}
int main(){
	int *a;// Khoi tao mot con tro
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d la: ",i);
		scanf("%d",a+i);
	}
	int p =timmax(a,n);
		printf("So lon nhat la %d\n",p);
	sapxep(a,n);
	
	int m;
	printf("Nhap so phan tu muon tang them: ");
	scanf("%d",&m);
	a=(int*)realloc(a,(n+m)* sizeof(int));
	printf("Nhap them %d phan tu",m);
	for(int i=n;i<n+m;i++){
		printf("Nhap phan tu so %d la: ",i);
		scanf("%d",a+i);
	}
	p =timmax(a,n+m);
		printf("So lon nhat la %d\n",p);
	sapxep(a,n+m);
}
