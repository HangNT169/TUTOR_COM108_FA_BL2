#include <stdio.h>

void kiemTraSo(){
  int number;
  printf("Nhap so:");
  scanf("%d",&number);
  if(number %2 ==0){
    printf("So chan");
  }else{
    printf("So le");
  }
}

void tinhTong(){
  int soThuNhat,soThuHai;
  printf("Nhap vao so thu nhat:");
  scanf("%d",&soThuNhat);
  printf("Nhap vao so thu hai:");
  scanf("%d",&soThuHai);
  int tong = soThuNhat +soThuHai;
  printf("Tong = %d",tong);
}

void kiemTraThang(){
  int thang;
  printf("Nhap thang:");
  scanf("%d",&thang);
  switch(thang){
    case 1:{
      printf("Thang mot");
      break;
    }
    case 2:{
      printf("Thang hai");
      break;
    }
    case 3:{
      printf("Thang ba");
      break;
    }
    case 4:{
      printf("Thang tu");
      break;
    }
    case 5:{
      printf("Thang nam");
      break;
    }
    case 6:{
      printf("Thang sau");
      break;
    }
    case 7:{
      printf("Thang bay");
      break;
    }
    case 8:{
      printf("Thang tam");
      break;
    }
    case 9:{
      printf("Thang chin");
      break;
    }
    case 10:{
      printf("Thang muoi");
      break;
    }
    case 11:{
      printf("Thang muoi mot");
      break;
    }
    case 12:{
      printf("Thang muoi hai");
      break;
    }
    default:{
      printf("Khong phai thang trong nam");
      break;
    }
  }
}

void tinhTongCacSoLe(){
  int n;
  printf("Nhap n:");
  scanf("%d",&n);
  int tong = 0;
  for(int i = 0;i<=n;i++){
    if(i % 2 != 0){
      printf("%d\n",i);
      tong +=i;
    }
  }
  printf("Tong = %d",tong);
}

void tinhTichCacSoLe(){
  int n;
  printf("Nhap n");
  scanf("%d",&n);
  int tich = 1;
  for(int i = 1;i<=n;i++){
    if(i % 2 != 0){
      printf("%d\n",i);
      tich *=i;
    }
  }
  printf("Tich = %d",tich);
}

void demSoChan(){
  int n;
  printf("Nhap n:");
  scanf("%d",&n);
  // n = 10 : 0,1,2,3,4,5,6,7,8,9,10
  // 0,2,4,6,8,10
  // 1  => 1 => 1+1= 2
  // 6
  int dem = 0;
  for(int i = 0;i<=n;i++){
    if(i % 2 == 0){
       printf("%d\n",i);
        dem ++; 
    }
      // i++;
      // i=i+2 // i+=2
      // dem = dem +1;
      // dem = dem +1;
      // dem+=1;
    
  }
  printf("Dem = %d",dem);
}
int main() {
  // kiemTraSo();
  // tinhTong();
  kiemTraThang();
  // tinhTongCacSoLe();
  // demSoChan();
  return 0;
}