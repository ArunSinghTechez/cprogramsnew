#include<stdio.h>


int main(){

  int myarr[2][3]={
  {11,22,44},
  {44,66,77}

  };
  for (int i = 0 ;i<2;i++){
    for(int j= 0;j<3;j++){
      printf("%d\t",myarr[i][j]);
    }
    printf("\n");
  }
printf("*********************************\n");

int (*ptr)[3];
ptr = myarr;


int i,j;
for(i=0;i<2;i++){
  printf("the value of array row : %u\t",*(ptr+i));
  for(j=0;j<3;j++){

  printf("%d\t",*(*(ptr+i)+j));
}
printf("\n");
}



  getchar();
  return 0;
}
