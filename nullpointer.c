#include<stdio.h>


int main(){
  int *ptr = 0;
  int *ptr2 = NULL;
  int myroll = 13;
  int *ptr3 = &myroll;


    printf("ptr:%d\n",ptr);
    printf("ptr2:%d\n",ptr2);

if(ptr==0){
  printf("yes ptr is  0\n");
}
else {
  printf("ptr is not 0\n");
}

if(ptr2==NULL){
  printf("yes ptr2 is NULL\n");
}
else {
  printf("yes ptr2 is  not NULL\n");
}

printf("the value of null in integar:---> %d\n",NULL);
printf("the value of null in character:-> %c\n",NULL);
printf("the value of null in double:----> %d\n",NULL);


  getchar();
  return 0;
}
