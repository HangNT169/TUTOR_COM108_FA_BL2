// Viet chuong trinh tinh tong cac so CHAN tu 1 -> 1000
#include<stdio.h>

int main() {
	int tong = 0;
	
	int bien_dem;
	for( bien_dem = 1; bien_dem <= 1000; bien_dem++) {
		// Chi tinh tong cac so CHAN
		// <=> Chi khi gap so chan thi moi tinh tong
		
		printf("Vong %d: ", bien_dem); // In ra vong hien tai
		
		if (bien_dem % 2 != 0) { // Neu bien dem chan
			printf("Day la vong chan, cong thoiii\n");
			
			tong = tong + bien_dem; // thi cong tong
			printf("Tong = %d", tong);
		}
		
		printf("\n");
	}
}
