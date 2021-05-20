#include<stdio.h>
#include<math.h>
int main(){
	float von,lai,thudc,nhan;
	printf("Nhap von: ");
	scanf("%f",&von);
	printf("Nhap nhan:");
	scanf("%f",&nhan);
	int nam=0;
	
	while(von<nhan){
		
		von = von + von * (8/100);
		nam = nam + 1;
	}
	printf("so nam la:%f",nam);
}
