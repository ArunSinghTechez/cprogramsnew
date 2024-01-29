#include<stdio.h>

#define MAX 10

int main(){

  int  arr[MAX]={11,22,33,444,4565,12786,983457,2568,19,110};
  int *ptr;

  printf("print array\n");

  int counter;
  counter = 0;

  for(ptr=arr;ptr<&arr[MAX];ptr++){

    printf("counter is %d : address is  %u :   %d\n",counter,ptr,*ptr);
    counter++;
  }

getchar();
return 0;
}
