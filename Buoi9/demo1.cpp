#include<stdio.h>

#include"thuvien.h"
int main(){
	//khai bao kieu int
	int b=4;
	if(ktrasole(b)){
		printf("%d la so le\n",b);
	}else{
		printf("%d khong la so le\n",b);
	}
	//Khai bao kieu int
	int k=3;
	if(ktranguyento(k)){
		printf("%d la  so nguyen to\n",k);
	}else{
		printf("%d khong phai phai so nguyen to\n",k);
	}
	//khai bao ham bool
	int c=5;
	bool kt=ktranguyento(c);
	if(kt=true){
		printf("%d la  so nguyen to\n",c);
	}else{
		printf("%d khong phai phai so nguyen to\n",c);
	}
	//Khai bao kieu int
	int sntt=songuyentonext(k);
	printf("So nguyen to tiep theo la %d\n",sntt);
	int a=1234;
	printf("so dao nguoc cua %d la %d\n",a,sodaonguoc(a));
	printf("so fibonaci cua 12 la %d\n",sofibonaci(12));
	//Khai bao kieu void
	ktrasoduong(3);
}
