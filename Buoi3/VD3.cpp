#include <stdio.h>

int main(){
	int ngay,thang;
	int dayOfYear;
	printf("Nhap ngay:");
	scanf("%d",&ngay);
	printf("Nhap thang:");
	scanf("%d",&thang);
	if(thang > 12 || thang <1 || ngay <1 || ngay > 31){
		printf("Ngay thang nhap vao khong dung");
	}else{
		if(thang==1){
			dayOfYear = ngay;
		}
		if(thang == 2){
			if(ngay > 28){
				printf("Ngay thang nhap vao khong dung");
			}else{
				dayOfYear = ngay + 31;
			}
		}
		if(thang == 3){
			dayOfYear = ngay + 28 + 31;
		}
		if(thang == 4){
			if(ngay >30){
				printf("Ngay thang nhap vao khong dung");
			}else{
				dayOfYear = ngay + 31 + 28 + 31;
			}
		}
		if( thang == 5){
			dayOfYear = ngay + 30 + 31 + 28 + 31;
		}
		if(thang == 6){
			if(ngay >30){
				printf("Ngay thang nhap vao khong dung");
			}else{
				dayOfYear = ngay + 31 + 30 + 31 + 28 + 31;
			}
		}
		if(thang == 7){
			dayOfYear = ngay + 30 + 31 + 30 + 31 + 28 + 31;
		}
		if(thang ==8){
			dayOfYear = ngay + 31 + 30 + 31 + 30 + 31 + 28 + 31;
		}
		if(thang == 9){
			if(ngay >30){
				printf("Ngay thang nhap vao khong dung");
			}else{
				dayOfYear = ngay + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			}
		}
		if(thang == 10){
			dayOfYear = ngay + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
		}
		if(thang == 11){
			if(ngay >30){
				printf("Ngay thang nhap vao khong dung");
			}else{
				dayOfYear = ngay + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			}
		}
		if(thang == 12){
			dayOfYear = ngay + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
		}
		
		if(dayOfYear%7 ==0){
			printf("Day la ngay thu %d trong nam va la chu nhat",dayOfYear);
		}
		if(dayOfYear%7>=1 && dayOfYear%7<=6){
			printf("Day la ngay thu %d trong nam va la thu %d",dayOfYear,dayOfYear%7+1);
		}		
	}
	
	
}
