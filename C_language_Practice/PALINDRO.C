#include<stdio.h>
#include<conio.h>
void main(){
int num,rem,sum=0,temp;
clrscr();
printf("Enter the number");
scanf("%d",&num);
temp = num;
while(num>0){
rem = num% 10;
num = num/10;
sum = (sum*10) + rem;
}
if(sum==temp){
printf("Number is palindrom");
}
else{
printf("Number is not palindrom");
}
getch();
}