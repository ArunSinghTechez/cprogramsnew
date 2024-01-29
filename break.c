#include<stdio.h>
#include<conio.h>


int main(){



int num;

printf("enter any number \n");
scanf("%d",&num);

while(num<10){
  printf("\n the num is : %d\n",num);
  num++;
  if(num==5){
    break;
  }


}


printf("\nthe statement breaks at %d\n",num);

  getchar();
  return 0;
}
