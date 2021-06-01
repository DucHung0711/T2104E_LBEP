int tinhtong(int x,int y){ // ko phai khai bao bien -> dang ky 2 tham so truyen vao la 2 so nguyen
	int z = x + y;
	return z;
}
void kiemtrasole(int n){
	if(n%2==1){
		printf("%d la so le\n",n);
	}
}
bool ktsoduong(int n){
	if(n>0){
		return true;
	}
	return false;
}
bool kiemtrasonguyento(int n){
	if(n<2) return false;
	if(n < 4) return true;
	// ra den day chac chan n>=4
	for(int i=2;i<n;i++){
		if(n%i==0){ // xem n co uoc so nao khac 1 va n hay ko
			return false;
		}
	}
	return true;
}
int songuyentotieptheo(int n){
	for(int i=n+1;true;i++){// chay mai mai den khi tim duoc thi thoi
		// kiem tra i co phai snt hay ko
		if(kiemtrasonguyento(i)){
			return i;
		}
	}
}
int timsodaonguoc(int n){
	int m = 0;
	for( ;n!=0;n/=10){
		m = m*10 + n%10;
	}
	return m;
}
int timsothuocfibonaci(int n){
	if(n<1) return 0;
	if(n <3) return 1;
	if(n<4) return 2;
	int x1 = 1,x2=1,x3=2;
	for(int i=4;i<=n;i++){
		x1 = x2;
		x2 = x3;
		x3 = x1+x2;
	}
	return x3;
}
