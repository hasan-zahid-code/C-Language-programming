#include<stdio.h>

//Recursive function which takes an integer as a parameter and returns the sum of the digits of the number

int sum(int x){
	if (x==0) return 0;
	else {
	return x%10+sum(x/10);
	}
}
int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	printf("Sum is: %d",sum(x));
}

