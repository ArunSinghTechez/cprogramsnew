//compare three numbers which is bigger


#include<stdio.h>
#include<conio.h>


int max_number(int x ,int y);

int main(){
  int num1,num2,num3,result,final_result;

  printf("enter the 1st num \n");
  scanf("%d",&num1);

  printf("enter the 2nd num \n");
  scanf("%d",&num2);

  printf("enter the 3rd number\n");
  scanf("%d",&num3);

  result = max_number(num1,num2);

  final_result = max_number(result,num3);

  printf("the biggest number is %d\n",final_result),




  getchar();
  return 0;
}

int max_number(int x,int y){
  int c;
  c = (x>=y)?x:y;
  return c;



}
