#include<stdio.h>
int main(){
	int n[10];
	int i,max=0,max2=0;
		
	for(i=0;i<10;i++){
		printf("Nhap n:");
		scanf("%d",&n[i]);
	}	
	max=n[0];
	for(i=0;i<10;i++){
		if(n[i]>max)
			max=n[i];
	}
	for(i=0;i<10;i++){
		if(max==n[i]){
			continue;
		}else if(max2<n[i]){
			max2=n[i];
		}
	}
	if(max!=max2)
	printf("Lon gan nhat %d",max2);	
	else
	printf("k co lon gan nhat ");	
}
