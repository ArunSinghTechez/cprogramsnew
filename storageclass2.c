// using static keyword


#include<stdio.h>


void display();
void starbar();

int main(){


  display();
  starbar();
  display();
  starbar();
  display();
  starbar();
  display();




  getchar();
  return 0;
}

void starbar(){

  for(int i = 0;i<20;i++){
    printf("%c",'*');
  }
  printf("\n");
}


void display(){
  int num1 = 10;
  static int num2 = 10;

  printf("the num1 is %d\n",num1);
  printf("the num2 is %d\n",num2);
  num1++;
  num2++;
}
