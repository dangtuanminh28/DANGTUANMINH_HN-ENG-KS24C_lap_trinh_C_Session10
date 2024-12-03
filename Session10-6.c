#include<stdio.h>
int main(){
	// Khai bao bien va mang
	int i,j,temp,num;
	int arr[]={2,38,7,47,23,8,7,6,2,24,23,43};
	int size=sizeof(arr)/sizeof(int);
	int flag=-1;
	// Nhap gia tri tu nguoi dung
	 printf("moi nhap gia tri muon kiem tra:");
	 scanf("%d", &num);
	// Xu ly thong tin
	 for(i=0;i<size;i++){
	 	if (arr[i]==num){
	 		printf("gia tri %d nam o vi tri %d\n",num,i);
	 		flag++;
		 }
	 }
	 if (flag==-1){
	 	// In ra ket qua
	 	printf("gia tri da nhap khong co trong mang");
	 }
   return 0;
}

