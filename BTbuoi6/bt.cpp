#include<stdio.h>

int main(){
	int menu=0;// bien ktra xem menu chon chuc naang gi
	int tongtien=0;// so tien khach hang can tra
	
	do{
		printf("Menu xin, khong chon thi cut!\n");
		printf(" 1. Chon mon an\n 2. Goi do uong\n 3. Thanh toan\n 4. Quit hang chuong trinh\n");
		printf("Nhap nhanh len!\n");
		printf("Nha hang khong co tay vin!\n");
		scanf("%d",&menu);
		switch(menu){
			case 1:{
				// dua ra danh sach mon an 			
				int monan;
				do{
					printf("Chon mon\n");
					printf(" 1. Ga hap\n 2. Cua luoc\n 3. Luon ham\n 4.Deo chon\n");
					printf("Vui long chon mon");
					scanf("%d",&monan);
					if(monan==1){
						tongtien=tongtien+10;//tongtien += 10;
						printf("Khach da chon 1");
					}else if(monan==2){
						tongtien=tongtien+20;//tongtien += 10;
						printf("Khach da chon 2");
					}else if(monan==3){
						tongtien=tongtien+30;//tongtien += 10;
						printf("Khach da chon 3");
					}
				}while(monan!=4);	
				break;
			}
			case 2:{
				// dua ra danh sach do uong
				printf(" 1. Nuoc luoc ga\n 2. Nuoc luoc cua\n 3. Nuoc ham luon\n 4.Deo chon\n");	
				int douong;
				do{
					printf("Chon mon\n");
					printf(" 1. Ga hap\n 2. Cua luoc\n 3. Luon ham\n 4.Deo chon\n");
					printf("Vui long chon mon");
					scanf("%d",&douong);
					if(douong==1){
						tongtien=tongtien+10;//tongtien += 10;
						printf("Khach da chon 1");
					}else if(douong==2){
						tongtien=tongtien+20;//tongtien += 10;
						printf("Khach da chon 2");
					}else if(douong==3){
						tongtien=tongtien+30;//tongtien += 10;
						printf("Khach da chon 3");
					}
				}while(douong!=4);			
				break;
			}	
			case 3:{
				// thanh toan
				printf("KH vua chon thanh toan");
				printf("KH can thanh toan: %d\n",tongtien);	
				tongtien=0;			
				break;
			}
			case 4:{
				// khong lam gi
				break;	
			}
			default:{
				printf("Quy khach khong con lua chon nao khac\n");
				break;
			}				
		}
	}while(menu!=4);				
}
