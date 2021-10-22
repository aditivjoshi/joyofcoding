#include<stdio.h>

int main(){
	int arr[20],n;
	
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);

	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(int i=-0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				while(j<n){
					arr[j]=arr[j+1];
					j++;
				}
				n--;
			}
		}
	}

	printf("The new array elements are:\n");
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
}
