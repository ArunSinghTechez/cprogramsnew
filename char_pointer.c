#include<stdio.h>

int main(){
  char myname[] = "Arun_Singh";
  int count = 0;
  char *ptr = NULL;

  ptr = myname;
  while(*ptr!='\0'){
    printf("at %d : %c\t",count,*ptr);
    ptr++;
    count++;
  }

  printf("\n");

  char *startptr = myname;
  printf("the number of elements are  : %d\n",ptr-startptr);





  getchar();
  return 0;
}
