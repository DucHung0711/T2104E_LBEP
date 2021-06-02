#include <stdio.h>
#include <string.h>
int main(){
	char s[50];//mang 1  chieu 50 ki tu
	printf("Nhap vao chuoi: ");
	scanf("%s",s);
	int a,e,i,o,u,k;
	a=e=i=o=u=k=0;
	for(int j=0;j<strlen(s);j++){
		switch(s[j]){
			case 'a':a++;break;
			case 'e':e++;break;
			case 'i':i++;break;
			case 'o':o++;break;
			case 'u':u++;break;
			default: k++;	
		}	
	}
	printf("a %d\n",a);
	printf("e %d\n",e);
	printf("i %d\n",i);
	printf("o %d\n",o);
	printf("u %d\n",u);
	printf("khac %d\n",k);
}
