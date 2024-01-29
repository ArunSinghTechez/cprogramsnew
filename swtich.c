#include<stdio.h>
#include<conio.h>
#include<ctype.h>


int main() {
  char ch,wh;
  printf("\n enter the desired alphabet\n");
  wh = getchar();
  ch = tolower(wh);

  switch(ch){
    case 'a':
    printf("\n you got %c",ch);
    break;

    case 'b':
    printf("\n you got %c",ch);
    break;

    case 'c':
    printf("\n you got %c",ch);
    break;

    default:
    printf("\n not found\n");
    break;






  }







  getchar();
  return 0;
}
