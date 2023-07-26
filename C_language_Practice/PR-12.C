#include<stdio.h>
#include<conio.h>
int factorial(int N){
if(N==1)
return 1;
else
return (N*factorial(N-1));
}
void main(){
int N,fact;
clrscr();
printf("Enter a number: ");
scanf("%d",&N);
fact=factorial(N);
printf("\nFactorial = %d",fact);
getch();
}