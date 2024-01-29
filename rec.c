#include<stdio.h>
#include<conio.h>


int fact(int n);

int main() {

  int num = 5;
  int factnum;

  factnum = fact(num);

  printf("the fact of num %d is :  %d",num,factnum);




  getchar();
  return 0;
}

int fact(int n){

  if (n==1){
    return 1;
    }

  else
    return n*(fact(n-1));
}
