// Viet chuong trinh tinh tong cac so tu 1 -> 10
#include<stdio.h>

int main() {
	int tong = 0; // = 1 + 2 + 3 + 4 + ... + 10;
	
	int bien_dem;
	for(bien_dem = 1; bien_dem <= 1000; bien_dem++) {
		printf("Vong %d: ", bien_dem);
		tong = tong + bien_dem;
		printf("Tong = %d", tong);
		printf("\n");
	}
}
