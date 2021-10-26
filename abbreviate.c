#include<stdio.h>
#include<string.h>
int main(){
	char str[40],abr[5];int k=0;
	printf("Enter the string to be abbreviated: \n");
	gets(str);
	
	for(int i=0;i<strlen(str);i++){
		if(65<=str[i]&& str[i]<=90)
		{
			abr[k]=str[i];
			k++;
		}
	}
	abr[k]='\0';
	
	printf("Abbreviation: %s\n",abr);
}
