#include<stdio.h>
#include<conio.h>
void main(){
int i,temp, a[10];
clrscr();
	printf("Enter 10 numbers: ");
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);
	}
	temp=a[0];
	for(i=0;i<10;i++){
	 if(temp<a[i]){
	 temp=a[i];
	 }
	}
printf("Largest number is: %d",temp);
getch();
}