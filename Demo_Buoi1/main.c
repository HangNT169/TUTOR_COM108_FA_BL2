#include <stdio.h>
#include <stdlib.h>

int main() {
	//Bai 1
	int a,b,c; //Khai bao bien 
	printf("Bài 1\n"); 
	printf ("Moi ban nhap a : ");//Moi nhap 
	scanf("%d",&a);//lay gia tri nguoi dung nhap 
	printf ("Moi ban nhap b : ");
	scanf("%d",&b);
	printf ("Moi ban nhap c : ");
	scanf("%d",&c);
	printf("Tong : %d\n",a+b+c);//In ra ket qua 
	printf("Hieu : %d\n",a-b-c);
	printf("Tich : %d\n",a*b*c);
	printf("Thuong : %.1f",(float)a/b/c);//Ep kieu Float vì ket qua phep chia la so thuc 
	printf("\n(a + b) * c = %d",(a+b)*c); 
	printf("\n----------------\n");

	//Bai 2 
	 int e,f;
	printf("Bài 2\n"); 
	printf ("Moi ban nhap canh e : ");//Moi nhap 
	scanf("%d",&e);//lay gia tri nguoi dung nhap 
	printf ("Moi ban nhap canh f : ");
	scanf("%d",&f);
	if(e==f){//dung if else de xu ly dieu kien 
		printf("Dien tich hinh vuong : %d",e*f); 
	}else{
		printf("\nDien tich hinh chu nhat la : %d",e*f);
	} 
	
	//Bai 3
	float toan,van,anh,trungbinh;
	printf("\nBài 3\n"); 
	printf ("Moi ban nhap diem toan : ");//Moi nhap 
	scanf("%f",&toan);//lay gia tri nguoi dung nhap 
	printf ("Moi ban nhap diem van : ");
	scanf("%f",&van);
	printf ("Moi ban nhap diem van : ");
	scanf("%f",&anh);
	trungbinh = (toan+van+anh)/3;
	printf("Diem trung binh la : %.1f",trungbinh); 
	
	if(trungbinh<0||trungbinh>10){
		printf("\nDiem Trung Binh Khong Hop Le");
	}else if(trungbinh>=0&&trungbinh<=4){
		printf("\nHoc Luc : Yeu");
	}else if(trungbinh<6){
	   printf("\nHoc Luc : TB");
	}
	else if(trungbinh<8){
	   printf("\nHoc Luc : Kha");
	}else{
	   printf("\nHoc Luc : Gioi");
	}

	return 0;
}
