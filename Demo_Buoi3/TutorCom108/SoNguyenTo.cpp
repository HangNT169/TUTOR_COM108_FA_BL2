// Viet chuong trinh kiem tra so bat ky co phai so NGUYEN TO khong
#include<stdio.h>

int main() {
	int so_bat_ky = 28;
	
	// So nguyen to la so chia het cho 1 va chinh no
	// => So nao cung chia het cho 1
	// => Neu xuat nao chia het cho mot so khac ngoai tru chinh no thi khong phai so NGUYEN TO
	int bien_dem;
	for(bien_dem = 2; bien_dem < so_bat_ky; bien_dem++) {
		if (so_bat_ky % bien_dem == 0) { //Neu so bat ky chia het cho bien dem
			printf("%d chia het cho %d => KHONG phai la so nguyen to\n", so_bat_ky, bien_dem);
			break; // thoat khoi vong lap
		}
	}
}
