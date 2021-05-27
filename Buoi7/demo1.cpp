#include<stdio.h>

int main(){
	int ary[10];
	int i,total,max;
	for(i=0;i<10;i++){
		printf("Nhap ary:");
		scanf("%d",&ary[i]);
	}
	max = ary[0];
	for(i=1;i<10;i++){
		if(ary[i]>max)
		max=ary[i];
	}
	printf("max la %d",max);
}
