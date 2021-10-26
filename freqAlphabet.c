#include<stdio.h>
#include<string.h>

int main(){
	char str[40],ch;
	
	printf("Enter the string: \n");
	gets(str);
	
	int freq[strlen(str)]

	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
			continue;

		for(int j=i+1;j<strlen(str);j++){

			if(str[i]==str[j]){
				freq[i]++;
				flag[i]=0;
			}

		}		
	}
}
