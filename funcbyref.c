#include<stdio.h>
#include<conio.h>


void swap(int *x,int *y);


int main(){

  int num1;
  int num2;

  num1 = 10;
  num2 = 20;

  printf("the value of num1 : = %d  and num2  = %d\n",num1,num2);
  printf("swap func called \n");
  swap(&num1,&num2);
  printf("after swap func the value of num1 : = %d  and num2  = %d\n",num1,num2);


  getchar();
  return 0;
}

void swap(int *x,int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
printf("the value of num1 : = %d  and num2  = %d\n",*x,*y);

}
