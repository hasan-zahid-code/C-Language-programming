#include<stdio.h>

//Sum of 1s in binary of a denary number through a recursive function

int sum(int x){
	if (x==0) return 0;
	else {
		int count=0;
		//count+=10;
	return x%2+sum(x/2);
	}
}
int main(){
	int x;
	printf("Enter a denary number: ");
	scanf("%d",&x);
	printf("sum is: %d",sum(x));
}

