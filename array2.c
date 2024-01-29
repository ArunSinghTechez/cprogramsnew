// array by user input data


#include<stdio.h>

int main(){
  int length;
  printf("enter the length of array\n");
  scanf("%d",&length);
  int myarr[length];


  for(int i = 0;i < length;i++){
    printf("enter int type data for array:");
    scanf("%d",&myarr[i]);
  }


  printf("the arrar is \n");

  for(int i = 0;i<length;i++){
    printf("at index --- %d   :    %d\n",i,myarr[i]);
  }




  getchar();
  return 0;
}
