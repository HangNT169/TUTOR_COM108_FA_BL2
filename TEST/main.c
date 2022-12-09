#include<stdio.h>
void bai1(){
    fflush(stdin);
    char name[50];
    int namSinh;
    int canNang;
    printf("Ten nyc:");
    gets(name);
    printf("Namsinh:");
    scanf("%d",&namSinh);
    printf("Can nang:");
    scanf("%d",&canNang);

    printf("In thong tin:\n");
    printf("Ten = %s Can nang = %d   Nam sinh = %d\n",name,canNang,namSinh);
}
void bai2(){
    int number;
    printf("Nhap number:");
    scanf("%d",&number);
    int sum = 0;
    for(int i = 0;i<=number;i++){
        if(i %2==0){
            sum+=i;
        }
    }
    printf("Sum = %d\n",sum);
}
void bai3(){
    int size;
    printf("Nhap size:");
    scanf("%d",&size);
    int arr[size];
    printf("Nhap thong tin vaccine:\n");
    for (int i = 0; i < size; i++){
       scanf("%d",&arr[i]);
    }
    printf("Size = %d\n",size);

    printf("In mang\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
}
int main(){
   int menu;
   printf("\n--------Menu-------------\n");
   printf("1.Nhap thong tin cua nguoi yeu cu\n");
   printf("2.Tinh tong cac so le tu 1 toi n\n");
   printf("3.Thong tin vaccine\n");
   printf("0.Thoat\n");
   do{
    printf("Nhap chuc nang:");
    scanf("%d",&menu);
    switch (menu){
        case 1:{
            bai1();
            break;
        }
        case 2:{
            bai2();
            break;
        }
         case 3:{
            bai3();
            break;
        }
        case 0:{
            break;
        }
        default:
            printf("Chuc nang khong ton tai");
            break;
        }
   }while(menu!=0);
   return 0;
}