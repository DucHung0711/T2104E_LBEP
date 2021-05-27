#include<stdio.h>
#include<math.h>
int main(){
	int n[10];
	int i;
	double dem=0,sum=0;
	double tong;
	for(i=0;i<10;i++){
		printf("Nhap n thu %d:",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++){
		if(n[i]%2!=0 && i%2==0)
			sum=sum+n[i];
			dem++;			
	}
	tong=double(sum/dem);
	printf("trung binh cong so le %lf",tong);
}
