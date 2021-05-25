#include<stdio.h>

int main(){
	char luachon;
	printf("Menu xin, khong chon thi cut!\n");
	printf(" 1. Chon mon an\n 2. Goi do uong\n 3. Thanh toan\n 4. Quit hang chuong trinh\n");
	printf("Nhap nhanh len!\n");
	printf("Nha hang khong co tay vin!\n");
	luachon = getchar();//nhap  mot ki tu
	do{
		switch(luachon){
			case 1:
				int chonmon;
				printf("1. Ga hap\n 2. Cua luoc\n 3. Luon ham\n 4.Deo chon\n");	
				scanf("%d",&chonmon);
				
				break;
			
			case 2:
				int chondouong;
				scanf("%d",&chondouong);
				printf("1. Nuoc luoc ga\n 2. Nuoc luoc cua\n 3. Nuoc ham luon\n 4.Deo chon\n");
				
				break;
				
			case 3:
				int thanhtoan;
//				scanf("%d",&chonmon);
				printf("1. Ga hap\n 2. Cua luoc\n 3. Luon ham\n 4.Deo chon\n");
				
				break;
			
			case 4:break;
//			default:
//				printf("Ban khong cos su lua chon nao khac");break;		
		}
	}while(luachon!=0);				
}
