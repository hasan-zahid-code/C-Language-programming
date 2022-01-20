#include<stdio.h>
struct complex{
	float real;
	float imaginary;
};

void read(struct complex *a){
	printf("\nEnter Complex Number X(5+3i): ");
	scanf(" %f %*c %f%*c",&a->real,&a->imaginary);
}
void write(struct complex a){
	printf("\nResult: %.2f %.2fi",a.real,a.imaginary);
}
void add(struct complex a,struct complex b,struct complex *c){
	c->real=a.real+b.real;
	c->imaginary=a.imaginary+b.imaginary;
}
void multiply(struct complex a,struct complex b,struct complex *c){
	c->real = a.real * b.real - a.imaginary * b.imaginary;
    c->imaginary = a.real * b.imaginary + b.real * a.imaginary;
}
int main(){
	struct complex x,y,result;
	int choice;
	printf("\n1-Add two complex Numbers\n2-Multiply two complex Numbers?\t");
	scanf("%d",&choice);
	if(choice==1){
		read(&x);
		read(&y);
		add(x,y,&result);
		write(result);
	}
	else if(choice==2){
		read(&x);
		read(&y);
		multiply(x,y,&result);
		write(result);
	}
	
	
}
