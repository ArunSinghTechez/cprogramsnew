#include<stdio.h>


int main(){
  const long char *arr[2] = {
    "arun",
    "singh"
  };

  // let us take two variable for printing variable c for columns and r for rows


  int c;
  int r;
  for(r=0;r<2;r++){
    c=0;
    while(*(arr[r]+c)!='\0'){
      printf("%c",*(arr[r]+c));
      c++;
    }

    printf("\n--------------------------------------------------------\n");


  }

const char *bpointer = arr[1];
while (*bpointer != '\0'){
  printf(":%c",*bpointer);
  bpointer++;
}


printf("\n--------------------------------------------------------\n");




  getchar();
  return 0;
}
