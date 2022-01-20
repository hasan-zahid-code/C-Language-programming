#include<stdio.h>
/*Write a program that takes n numbers from the user and sort them in ascending order using a
function. Then ask the user whether to print in ascending order or descending order. Write a
recursive function for the print in both cases.*/
int main(){
	int len,x,i,j;
	printf("Enter Length of array: ");
	scanf("%d",&len);
	int arr[len];
	for(i=1;i<=len;i++){
		printf("Element %d: ",i);
		scanf("%d",&x);
		arr[i]=x;
	}
	sort(len,arr);
	printf("\nAscending:  ");
	printAsc(1,len,arr);
	printf("\nDescending:  ");
	printDec(1,len,arr);
}
int sort(int a,int arr[a]){
	int i,j,temp;
	for(i=1;i<=a-1;i++){
		for(j=i+1;j<=a;j++){
		if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
			
	}
}
	
}
int printAsc(int start, int end, int arr[]){
	if(start==end+1)
	return 0;
	else{
		printf("\nElement %d: %d",start,arr[start]);
		printAsc(start+1,end,arr);
	}
}
int printDec(int start,int end, int arr[]){
	if(end==start-1)
	return 0;
	else{
		printf("\nElement %d: %d",end,arr[end]);
		printDec(start,end-1,arr);
	}
}

