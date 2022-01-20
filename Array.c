#include<stdio.h>

/*Write a function which takes the values from the user,
? length of the array
? lower bound of the values
? upper bound of the values.
Then ask the user to input the values in the array, if a value out of bounds is entered it should
not be stored in the array. At each input user should be told how much space is available in the
array and how many items are currently in the array. If the array is full, it should be printed*/

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
