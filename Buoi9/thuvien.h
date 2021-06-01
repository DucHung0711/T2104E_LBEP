#include<stdio.h>
int ktrasole(int n){
	if(n%2!=0){
		return n;
	}	
}
void ktrasoduong(int n){
	if(n%2==0){
		printf("%d la so duong",n);
	}else{
		printf("%d khong la so duong",n);
	}
}
//
bool ktranguyento(int n){
	if(n<2) return false;
	if(n<4) return true;
	// ra day n chac chan lon hon 4
	for(int i=2;i<n;i++){
		if(n%i==0){//ktra xem co chia het so nao ngoai no khong
			return false;
		}
	}
	return true;
}
//
int songuyentonext(int n){
	for(int i=n+1;true;i++){
		if(ktranguyento(i)){
			return i;
		}
	}
}
//
int sofibonaci(int n){
	if(n<1) return 0;
	if(n<3) return 1;
	if(n<4) return 2;
	int x1=1,x2=1,x3=2;
	for(int i=4;i<=n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	return x3;
}
//
int sodaonguoc(int n){
	int m=0;
	for(;n!=0;n/=10){
		m=m*10 + n%10;
	}
	return m;
}



