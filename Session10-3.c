#include<stdio.h>
int main(){
// Khai bao bien va mang
	int i,j,temp;
	int arr[]={2,38,7,47,23,8};
	int size=sizeof(arr)/sizeof(int);
// Xu ly thong tin va sap xep chen insertion sort
	for(i=1;i<size;i++){
		temp = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
		   arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
		for(i=0;i<size;i++){
			// In ra ket qua
			printf("%d\t",arr[i]);
		}
   return 0;
}

