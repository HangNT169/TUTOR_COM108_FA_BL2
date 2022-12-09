#include<stdio.h>

// Viet chuong trinh tinh tong so sinh vien trong tang 3 toa P
// Biet so luong sinh vien moi phong
int main() {
	int n; // Tong so phong
	printf("Moi nhap so phong: ");
	scanf("%d", &n);
	int danh_sach_phong[n]; // -> Tao ra n phong

	int i; // bien dem
	// Cach hien dai
	printf("====== GAN GIA TRI CHO TUNG PHAN TU CUA MANG\n");
	for(i = 0; i < n; i++) {
		printf("Moi nhap gia tri cho phong thu %d: ", i);
		scanf("%d", &danh_sach_phong[i]);
	}
	
	printf("====== DUYET TUNG PHAN TU CUA MANG\n");
	for(i = 0; i < n; i++) {
		printf("Phong thu %d co gia tri = %d\n", i, danh_sach_phong[i]);
	}

	printf("====== TINH TONG PHAN TU CUA MANG\n");
	int tong = 0;
	for(i = 0; i < n; i++) {
		tong = tong + danh_sach_phong[i];
	}
	printf("Tong so sinh vien cac phong = %d\n", tong);
	
	printf("====== TRUNG BINH SO SINH VIEN TUNG PHONG\n");
	// trung binh = tong / so luong
	int trung_binh = tong / n;
	printf("Trung binh sinh vien tung phong = %d\n", trung_binh);
	
	printf("====== TINH TONG CUA PHAN TU LE CUA MANG\n");
	int tong_le = 0;
	for(i = 0; i < n; i++) {
		if (i % 2 == 1) { // i chia 2 du 1 <=> i le
			tong_le += danh_sach_phong[i];
		}
	}
	printf("Tong so sinh vien phong le = %d\n", tong_le);
	
	printf("====== TRUNG BINH SO SINH VIEN CUA PHONG CHAN\n");
	int tong_chan = 0;
	for(i = 0; i < n; i++) {
		if (i % 2 == 0) { // i chia 2 du 0 <=> i chan
			tong_chan += danh_sach_phong[i];
		}
	}
	printf("Tong so sinh vien phong chan = %d\n", tong_chan);
	
	int so_luong_phong_chan = 0;
	for(i = 0; i < n; i++) {
		if (i % 2 == 0) { // i chia 2 du 0 <=> i chan
			so_luong_phong_chan = so_luong_phong_chan + 1;
		}
	}
	printf("So luong phong chan = %d\n", so_luong_phong_chan);
	
	printf("Trung binh so sinh vien phong chan = %d", tong_chan / so_luong_phong_chan);
}
