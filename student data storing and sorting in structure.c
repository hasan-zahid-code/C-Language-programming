#include<stdio.h>
#include<string.h>
/*Write a C Program to Store Information of N Students Using Structure, where N is provided by
the user. Then ask the user whether he would like to see the top 3 students or bottom 3
students based on their CGPA. You will ask the following information about the student:
? Name
? Registration (last 4 digits only).
? CGPA
? Semester*/


struct student{
		char name[20];
		int Registration;
		float CGPA;
		int semester;	
	};
int main(){
	int i,j,n,x;
	printf("Enter number of students: ");
	scanf("%d",&n);
	struct student a[n],temp;
	for(i=1;i<=n;i++){
		printf("\nEnter Student %d name: ",i);
		scanf("%s",&a[i].name);
		printf("Enter registration number: ");
		scanf("%d",&a[i].Registration);
		printf("Enter CGPA: ");
		scanf("%f",&a[i].CGPA);
		printf("Enter semester: ");
		scanf("%d",&a[i].semester);	
	}
	//sort structure
	for(i=1;i<=n-1;i++){
		for(j=i+1;j<=n;j++){
			if(a[i].CGPA<a[j].CGPA){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	printf("1- First 3 students \n2- Last 3 students: ");
	scanf("%d",&x);	
	if (x==1){
		for(i=1;i<=3;i++){
			printf("\nName: %s\n",a[i].name);
			printf("Registration number: %d\n",a[i].Registration);
			printf("CGPA: %.2f\n",a[i].CGPA);
			printf("Semester: %d\n\n",a[i].semester);
		}
	}
	else if (x==2){
		for(i=n;i<=n-3;i--){
			printf("\nName: %s\n",a[i].name);
			printf("Registration number: %d\n",a[i].Registration);
			printf("CGPA: %.2f\n",a[i].CGPA);
			printf("Semester: %d\n\n",a[i].semester);
		}
	}
}
