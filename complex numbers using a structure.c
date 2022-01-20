#include<stdio.h>

/*C program that uses functions to perform the following operations:
* Reading a complex number
* Writing a complex number
* Addition of two complex numbers
* Multiplication of two complex numbers*/

int main(){
	int a,b,c;
	printf("Enter Length of array: ");
	scanf("%d",&a);
	printf("Enter Lower Bound: ");
	scanf("%d",&b);
	printf("Enter Upper Bound: ");
	scanf("%d",&c);
	store(a,b,c);
}
int store(int length,int lower, int upper){
	int i,val,arr[length];
	for(i=1;i<=length;i++){
		do{
		printf("\nEnter a value between %d and %d: ", lower, upper);
		scanf("%d",&val);
		if(val<lower || val>upper)
			printf("\nValue Out Of Bounds");
		}
		while(val<lower || val>upper);
		arr[i]=val;
		printf(" Space Available: %d",length-i);
		printf("  Space used: %d",i);
	}
	printf("\nYour Array values: ");
	for(i=1;i<=length;i++){
		printf("\n%d: %d",i,arr[i]);
		
		
	}
}
