#include <stdio.h>

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#ifndef __CXX_TEST_MAIN__
//Author --  Arun Singh
//BCA Sem1
//Roll no 2414101058
// date 26 May 2024

int i,j;
int A[2][2];
int B[2][2];

int main(){

    //for matrices A
    printf("enter the elements of matrices A\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&A[i][j]);
        }
    }

    // for matrices B
    printf("enter the elements of matrices B\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&B[i][j]);
    }
}

//print them

 //print matrices A
    printf(" the elements of matrices A\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    // print matrices B
    printf(" the elements of matrices B\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d\t",B[i][j]);
    }
    printf("\n");
}
printf("the addition matrices is\n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d\t",A[i][j]+B[i][j]);
        }
        printf("\n");
    }

	
    printf("Hello world!!");
    return 0;
}


//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#endif