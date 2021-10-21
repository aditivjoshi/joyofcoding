#include<stdio.h>

int main(){
	int arr[10],flag=0;
	printf("Enter the array of 8 integers\n");
	for(int i=0;i<8;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<8;i++){
		for(int j=i+1;j<8;j++){
			if(arr[i]==arr[j]){
				
				flag=1;
				break;
			}
		}
	}
	
	if(flag==0)
		printf("Array distinct");
	else
		printf("Array not distinct");
	
	
}
