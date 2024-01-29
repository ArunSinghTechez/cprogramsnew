#include<stdio.h>
#include<conio.h>

int main(){


int i,j,num;

printf("enter the number\n");
scanf("%d",&num);


for(i = 0;i<num;i++){
  printf("\nthe value of i is : %d\n",i);
    for(j=0;j<10;j++){
      printf("%d\t",j);
    }

}





getch();
  return 0;
}
