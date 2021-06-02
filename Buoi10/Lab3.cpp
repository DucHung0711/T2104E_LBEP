#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	char str[n][50];// khai bao 1 mang  n chuoi
	for(int i=0;i<n;i++){
		printf("Nhap chuoi thu %d la: ",i);
		scanf("%s",str[i]);
	}	
	for(int i=0;i<n-1;i++)
      for(int j=0;j<n-i-1;j++){
      	// kiem tra 2 phan tu str[j] va str[j+1]
         if(strcmp(str[j],str[j+1])>0){
         	// swap 2 phan tu cho nhau
         	char temp[50];
            strcpy(temp,str[j]);
            strcpy(str[j],str[j+1]);
            strcpy(str[j+1],temp);
        }
    }
    printf("Thu tu ten duoc sap xep:\n");
    for(int i=0;i<n;i++){
		printf(" %s \n",str[i]);
	}
}
