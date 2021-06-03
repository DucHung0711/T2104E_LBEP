#include <stdio.h>
#include <stdlib.h>
int main(){
//	int arr[10];
//	for(int i=0;i<10;i++){
//		printf("Nhap pt thu %d: ",i);
//		scanf("%d",arr+i);// scanf("%d",&arr[i]);
//	}
	// muon nhap them 5 phan tu nua thi lam the nao
	// ma su dung hoan toan con tro de thay the cho mang
	// cap phat dong o nho
	int *arr; // khai bao 1 con tro
//	arr = (int *)malloc(10 * sizeof(int)); // cap phat 10 o nho 
	arr = (int *)calloc(10,sizeof(int));// cho cac o nho ve gia tri la 0 hoac null
	for(int i=0;i<10;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",arr+i);// scanf("%d",&arr[i]);
	}
	// thay doi kich thuoc mang
	arr = (int *)realloc(arr,15*sizeof(int)); // tang thanh 15 o nho
	printf("Nhap them 5 phan tu:\n");
	for(int i=10;i<15;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",arr+i);// scanf("%d",&arr[i]);
	}

	for(int i=0;i<15;i++){
		printf("%5d",arr[i]);
	}

	free(arr);
}
