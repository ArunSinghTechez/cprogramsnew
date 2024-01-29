#include<stdio.h>
#include<string.h>


int main(){

  char myname[20];
  char ch;
  int length;

  for(int i = 0;i<20;i++){
    myname[i]=0;
  }
printf("enter characters of your name\n");


  int i = 0;
  while( ch!='\n'){

    ch = getchar();
    myname[i]=ch;
    i++;
  }

  myname[i]='\0';

  printf("my name is : %s",myname);



    for(int j=0;j<20;j++){
      printf("%c,\n",myname[j]);
    }

    length= strlen(myname);
    printf("the length of string is : %d\n",length);






  return 0;
}
