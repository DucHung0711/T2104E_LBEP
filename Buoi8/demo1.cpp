#include<stdio.h>

int main(){
	int i,j,temp,a[5]={23,90,9,25,26};
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-i-1;j++){//max la
			if(a[j]>a[j+1]){
				//thuat toan swap
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep");
	for(int i=0;i<5;i++){
		printf("%5d",a[i]);
	}
}	
