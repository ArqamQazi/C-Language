#include<stdio.h>
#include<conio.h>
void main(){
int i, *ptr, a[10];
clrscr();
	printf("Enter 10 numbers: ");
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);
	}
	*ptr=&a[0];
	for(i=0;i<10;i++){
	 if(*ptr<a[i]){
	 ptr=&a[i];
	 }
	}
printf("Largest number is: %d",*ptr);
getch();
}