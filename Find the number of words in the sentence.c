#include<stdio.h>
#include<string.h>

int main( ){
	int len=100, i,words=0;
	char string[len],*ptr;
	ptr=string;
	printf("Enter a sentence: ");
	gets(string);
	for(i=0;i<=len;i++){
		if((words==0 && *(ptr+i)!=' ' && *(ptr+i+1)==' ')){
			words+=1;
		}
		else if((words>0 && *(ptr+i)==' ' && *(ptr+i+1)!=' ')){
			words+=1;
		}
	}
	printf("\nWords in sentence: %d",words);	
}
