#include<stdio.h>
int main(){
// khai bao bien
	int number,i;
	int flag=-1;
	int arr[]={2,4,6,8,10,12,14};
// nhap gia tri tu nguoi dung
	printf("moi nhap so can kiem tra: ");
	scanf("%d", &number);
// xu ly thong tin
  for( i=0;i<sizeof(arr)/sizeof(int);i++){
    	if (arr[i]==number){
    		flag=i;
		}
    	
	}
	if(flag!=-1){
		printf("phan tu nam o vi tri %d",flag);
	}else{
		printf("phan tu khong co trong mang");
	}
   return 0;
}

