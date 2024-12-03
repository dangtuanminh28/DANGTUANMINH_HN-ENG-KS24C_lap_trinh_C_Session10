#include<stdio.h>
int main(){
// Khai bao bien va mang
	int i,j,min;
	int arr[]={2,38,7,47,23,8};
	int size=sizeof(arr)/sizeof(int);
// Xu ly thong tin va sap xep chen selection sort	 
	for(i=0;i<size;i++){
	 	min = arr[i];
	 	for(j=i+1;j<size;j++){
	 		if(arr[j]<min){
	 			min=arr[j];
	 			arr[j]=arr[i];
	 			arr[i]=min;
	 		}
		}
	}
	for(i=0;i<size;i++){
		// In ra ket qua
	 	printf("%d\t",arr[i]);
	}
	return 0;
}
