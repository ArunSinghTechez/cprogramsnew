#include<stdio.h>


int main(){
  int var,var2;
  int *ptr;
  var = 20;
  ptr = &var;
  var2 = *ptr;
  int *ptr2 = &var2;
  *ptr2 = 31;

 printf("the val of var is : %d\n",var);
 printf("the val of ptr is: %d\n",ptr);
 printf("the val of &var is: %u\n",&var);
 printf("the val of *ptr is : %d\n",*ptr);
 printf("the val of var2:%d\n",var2);

 printf("******************************\n");

 printf("the val of var is : %d\n",var);
 printf("the val of ptr is: %d\n",ptr);
 printf("the val of &var is: %u\n",&var);
 printf("the val of *ptr is : %d\n",*ptr);




  getchar();
  return 0;
}
