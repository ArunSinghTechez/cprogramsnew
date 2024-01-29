#include<stdio.h>
#include<conio.h>


int main(){

  mycheck:   //declaring a label for goto control statement
  printf("\n we came to before control\n");
  printf("\n do you want to continue  'y or n' \n");
  int ch;
  ch = getchar();
  if(ch == 'n'){
    return -1;
  }


  int mynum;
  for(mynum = 1;mynum<10;mynum++){
    printf("\n for loop goin on  at %d\n",mynum);

    if (mynum == 5){

      printf("num is %d\n",mynum);
      goto mycheck;
    }

  }





  getchar();
  return 0;
}
