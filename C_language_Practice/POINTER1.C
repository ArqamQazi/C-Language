#include<stdio.h>
#include<conio.h>
void main(){
int *ptr,a[10],sum=0,i;
clrscr();
	printf("Enter a 5 numbers: ");
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);
	}
	ptr=&a[0];
	for(i=0;i<10;i++){
	sum=*ptr+sum;
	ptr++;
	}
	printf("\nSum of all elements: %d",sum);
getch();
}