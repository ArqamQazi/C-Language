#include<stdio.h>
#include<conio.h>
void main(){
char c;
int l,u;
clrscr();
printf("Enter a character : ");
scanf("%c",&c);
l=(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u');
u=(c=='A' || c=='E' || c=='I' || c=='O'|| c=='U');
if (l||u){
printf("%c is vowel",c);
}
else
printf("%c is consonat",c);
getch();
}