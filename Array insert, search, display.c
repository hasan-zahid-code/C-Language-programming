#include<stdio.h>

/*You are required to input the size of the array from the user and then ask the user to input
elements, showing the current count of the items in the list as well as the available capacity. You
are required to write three functions
? Insert (int key) // takes a key and inserts it into the next available space.
? Search (int key)
? // takes a key as an argument and returns the index if found or -1 if not found.
? Delete (int key)
? // takes a key as an argument and removes the element from the array if found
? Print
? prints all the values in the array*/

int Insert(int key,int len, int arr[len]){
	int i,empty=0;
	for(i=1;i<=len;i++){
		if(arr[i]==-1){
			empty=i;
			arr[i]=key;
			break;
		}
	}
	if (empty!=0)	return empty;
	else return -1;

}
int Search(int key,int len, int arr[len]){
	int i,found=0;
	for(i=1;i<=len;i++){
		if(arr[i]==key){
			found=i;
			break;
		}
	}
	if (found!=0) return found;
	else return -1;
}
int Delete(int key,int len, int arr[len]){
	int i,flag=0;
	for(i=1;i<=len;i++){
		if(arr[i]==key){
			flag=1;
			arr[i]=-1;
			break;
		}
	}
	if (flag==1) return 0;
	else return -1;
}
int Print(int len, int arr[len]){
	int i;
	for(i=1;i<=len;i++){
		printf("\nArray Element %d: %d",i,arr[i]);
	}
}
int main(){
	int len,i,val,choice,key;
	printf("Enter array size: ");
	scanf("%d",&len);
	int arr[len];
	printf("Enter array elements(-1 for null): ");
	for(i=1;i<=len;i++){
		printf("\nEnter value: ");
		scanf("%d",&val);
		arr[i]=val;
		printf(" Space Available: %d",len-i);
		printf("  Space used: %d",i);
	}

	printf("\nWhat function do u wanna apply?\n1- Insert\n2- Search\n3- Delete\n4- Print Array\n5- None, Terminate the program.\t");
	scanf("%d",&choice);
	while(choice!=5){
		if(choice==1){
			printf("Enter Value to Insert: ");
			scanf("%d",&key);
			val=Insert(key,len,arr);
			if(val==-1)
			printf("No Empty Space ");
			else
			printf("Value Inserted at: %d",val);
		}
		else if(choice==2){
			printf("Enter Value to Search: ");
			scanf("%d",&key);
			val=Search(key,len,arr);
			if(val==-1)
			printf("Value not found ");
			else
			printf("Value found at: %d",val);
		}
		
		else if(choice==3){
			printf("Enter Value to Remove: ");
			scanf("%d",&key);
			val=Delete(key,len,arr);
			if(val==-1)
			printf("Value not found ");
			else
			printf("Value deleted from : %d",val);

		}
		else if(choice==4){
			Print(len,arr);
		}
		printf("\nWhat function do u wanna apply?\n1- Insert\n2- Search\n3- Delete\n4- Print Array\n5- None, Terminate the program.");
		scanf("%d",&choice);
	}
	
}
