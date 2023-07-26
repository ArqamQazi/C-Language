#include<stdio.h>
#include<conio.h>
void main(){
int a,b,temp;
a=10;
b=20;
clrscr();
printf("Value of a = %d, b = %d before swapping ",a,b);
temp=a;
a=b;
b=temp;
printf("\nAfter swapping a = %d, b = %d ",a,b);
getch();
}