#include<stdio.h>
#include<conio.h>
int factorial(int N);
void main(){
int fact,N;
clrscr();
printf("\nEnter a number: ");
scanf("%d",&N);
fact=factorial(N);
printf("\nFActoial of a number is %d",fact);
getch();
}
int factorial(int N){
if (N==1)
return 1;
else
return (factorial(N-1)*N);
}