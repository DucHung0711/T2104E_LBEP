#include<stdio.h>
#include<math.h>
int main(){
	float laithudc,vonhientai,laisuat,namgui;
	printf("Nhap von hien tai:");
	scanf("%f",&vonhientai);
	printf("Nhap lai suat:");
	scanf("%f",&laisuat);
	printf("Nhap nam gui:");
	scanf("%f",&namgui);
	laisuat = laisuat / 100;
	laithudc = vonhientai * pow((1 + laisuat),namgui);	
	printf("Lai suat thu duoc la: %f $",laithudc);
}
