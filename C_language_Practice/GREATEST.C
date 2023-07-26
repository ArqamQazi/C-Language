//Greatest among three numbers using ternary operator
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,big;
clrscr();
printf("Enter three number:");
scanf("%d %d %d",&a,&b,&c);

big = a>b?(a>c?a:c):(b>c?b:c);
printf("\nThe biggest number is : %d",big);
getch();
}