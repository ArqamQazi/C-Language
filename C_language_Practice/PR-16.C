#include<stdio.h>
#include<conio.h>
void main(){
int n,i,flag=1;
clrscr();
printf("Enter a number : ");
scanf("%d",&n);
for(i=2;i*i<n;i++) {
if(n%i==0)
flag=0;
}
if(flag==0)
printf("Number is composite");
else
printf("NUmber is prime");

getch();
}