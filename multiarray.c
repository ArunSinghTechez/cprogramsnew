#include<stdio.h>
int row,col;

int insert_array(int m,int n);


int main(){


  printf("enter the length of array in row and col:\n");

  scanf("%d %d",&row,&col);
  insert_array(row,col);

getchar();
return 0;
}


int insert_array(int m,int n){

  int myarr[m][n];

  printf("enter elements for  multidim array \n");
  for(int i = 0;i<m;i++){
    for (int j = 0;j<n;j++){
      scanf("%d ",&myarr[i][j]);
    }
  }
return myarr[m][n];
}
