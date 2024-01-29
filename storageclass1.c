#include<stdio.h>


int add(int ,int);

void product(int,int);

int main(){
  int num1,num2;



  //local declare and only work in main function

  num1 = 10;
  num2 = 20;

  printf("main function called for sum : %d\n", num1+num2);

  printf("add function called :%d\n",add(30,40)); // this is called as a int return 

  product(5,6); // fucntion can be called this way if it is void return type



  getchar();
  return 0;
}

int add(int x,int y){

return (x+y);

}

void product(int x,int y){

  printf("the product is:%d ",x*y);



}
