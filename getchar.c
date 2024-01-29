#include<stdio.h>
#include<conio.h>
#include<ctype.h>


int main(){

  int lower,upper;
  printf("enter the character : \n");
  lower = getchar();
  upper = toupper(lower);

  putchar(upper);
	getch();



  return 0;
}
