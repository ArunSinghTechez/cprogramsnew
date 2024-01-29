#include<stdio.h>

int main(){
  char myarr[15]={"arun singh"};


  char *arr_pointer = myarr;

  while(*arr_pointer != '\0'){

    printf("---->%c",*arr_pointer);
    arr_pointer++;
  }







  getchar();
  return 0;
}
