#include<stdio.h>

// Viet chuong trinh hien thi so canh hoa
int main() {
	int so_canh_hoa = 1000;
	
	int bien_dem;
	for ( bien_dem = 1 ; bien_dem <= so_canh_hoa ; bien_dem++) {
		printf("Canh hoa thu %d ", bien_dem);
		
		// Dau % dai dien cho Phep chia lay du
		// bien_dem % 2 <=> chia 2 lay du
		// Khi chia 2, co 2 ket qua: du 0 hoac du 1
		// Du 0 <=> Khong du => Chan
		// Du 1 => Le
		if ( bien_dem % 2 == 0 ) { // TH du 0 => Canh hoa chan
			printf(" Yeu ");
		} else { // TH du 1 => Canh hoa le 
			printf(" Khong yeu ");
		}
		
		printf("\n"); // Xuong dong
	}
}
