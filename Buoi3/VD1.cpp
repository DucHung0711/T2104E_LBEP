#include<stdio.h>

int main(){
	int x;
	printf("Nhap ngay:");
	scanf("%d",&x);
	if(x>=2 && x<=7){
		printf("Thu %d là ngay trong tuan",x);
	}else{
		printf("%d khong la ngay trong tuan",x);
	}	
}
