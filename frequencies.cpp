#include<stdio.h>

int main(){
	int arr[20],flag[20],n,count=0;
	
	printf("Enter the number of integers in array \n");
	scanf("%d",&n);
	
	for (int i=0;i<n;i++)
		flag[i]=0;
		
	printf("Enter the array of integers\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<n;i++){
		count=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j] && flag[j]==0){
				count++;
				flag[j]=1;
			}
			
		}
		if(flag[i]==0)
			printf("%d 's : %d\n", arr[i],count);
	}
}
