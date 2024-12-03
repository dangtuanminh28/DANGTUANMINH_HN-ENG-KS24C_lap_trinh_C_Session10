#include<stdio.h>
int main(){
// khai bao bien va mang
	int i,j,temp;
	int arr[]={2,38,7,47,23,8};
    int size=sizeof(arr)/sizeof(int);
// xu ly thong tin va sap xep lai theo thu tu tang dan
    for(i=0;i<size;i++){
    	for(j=0;j<size-i-1;j++){
    		if(arr[j+1]<arr[j]){
    			temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
    				
			}
		}
    	 	
	}
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	
	

   return 0;
}

