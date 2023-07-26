#include<stdio.h>
#include<conio.h>
void main(){
int num,sum=0,rem,temp;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
temp=num;
while(num!=0){
rem=num%10;
sum=(sum*10)+rem;
num=num/10;
}
if(temp==sum){
printf("\nNumber is palindrom");
}
else
printf("\nNumber is not palindrom");
getch();
}