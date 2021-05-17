#include <stdio.h>
int main(){

	int n,t,a;
	printf("Nhap thang: ");
	scanf("%d",&t);
	printf("Nhap ngay: ");
	scanf("%d",&n);
	if(t<=12 && n<=31){
		if (t==1){	a = n;	} 
		if (t==2) { a = n+31;}
		if (t==3) { a= n+31+28;}
		if (t==4) {
			a = n+ 31*2 +28;
		}
		if (t==5) {
			a = n+31*2+28+30;
		}
		if (t==6) {
			a = n+31*3+28+30;
		}
		if (t==7) {
			a = n+31*3+28+30*2;
		}
		if (t==8) {
			a = n+31*4+28+30*2;
		}
		if (t==9) {
			a = n+31*5+28+30*2;
		}
		if (t==10) {
			a = n+31*5+28+30*3;
		}
		if (t==11) {
			a = n+31*6+28+30*3;
		}
	if (t==12) {
			a = n+31*6+28+30*4;
		}
			printf("Ngay %d, thang %d la ngay thu %d cua nam va la ",n,t,a);
		if (a%7==1)  {
			printf("thu 2");
		}
		if (a%7==2)  {
			printf("thu 3");
		}
		if (a%7==3)  {
			printf("thu 4");
		}
		if (a%7==4)  {
			printf("thu 5");
		}
		if (a%7==5)  {
			printf("thu 6");
		}
		if (a%7==6)  {
			printf("thu 7");
		}
		if (a%7==0)  {
			printf("chu nhat");
		}
	}else{
		printf("Khong co ngay thang nay");
	}
}
