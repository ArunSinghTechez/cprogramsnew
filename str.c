//Author Arun Singh
//BCA 1 batch
//Roll no 2414101058


#include <stdio.h>

#include <string.h>
//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#ifndef __CXX_TEST_MAIN__

int main(){
	
    char str1[100];
    char str2[100];
    printf("enter the string1\n");
    gets(str1);
    puts(str1);

    int lenstr = strlen(str1);
    int start,number;
    printf("enter the start of string\n");
    scanf("%d",&start);
    printf("enter the number of characters to copy\n");
    scanf("%d",&number);
    if(start+number-1<=lenstr){
        for(int i = start-1,j=0;i<lenstr,j<=number;i++,j++){
            str2[j]=str1[i];
            printf("%c",str2[j]);
        }
    }
    else {
        printf("copy of string not possible\n");
    }

    
    
    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#endif