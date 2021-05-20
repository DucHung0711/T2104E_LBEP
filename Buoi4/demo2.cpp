#include<stdio.h>
#include<math.h>
int main(){
	float von,nam,thudc,year;
	printf("Nhap von: ");
	scanf("%f",&von);
	printf("Nhp nam:");
	scanf("%f",&nam);
	year=0;
	while(year<nam){
		von = von + von * (8/100);
		year = year + 1;
	}
	printf("Lai thu duoc la:%f",von);
}
