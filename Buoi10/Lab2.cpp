#include <stdio.h>
#include <string.h>
int main(){
	char s[50];
	printf("Nhap vao chuoi: ");
	scanf("%s",s);	
	for(int i=0;i<=strlen(s);i++){
      if(s[i]>=97&&s[i]<=122){
      	 s[i]=s[i]-32;
		}   
	}
	printf("Mang sau duoc in thanh in hoa la %s ",s);  
}
