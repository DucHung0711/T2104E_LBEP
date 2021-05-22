#include<stdio.h>
#include<math.h>
int main(){
	int von,nam,thudc;
	printf("Nhap von: ");
	scanf("%d",&von);
	printf("Nhap nam:");
	scanf("%d",&nam);
	int year=0;
	while(year<nam){
		von = von + von * 8/100;
		year = year + 1;
	}
	printf("Lai thu duoc la:%d",von);
}

