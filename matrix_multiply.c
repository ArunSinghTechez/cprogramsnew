#include <stdio.h>

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#ifndef __CXX_TEST_MAIN__

//Author - Arun Singh
// Roll no 2414101058

int A[2][2];
int B[2][2];
int C[2][2];
int i,j,k;

int main(){
    //for enter elements for A
    printf("enter the elements for matrix A\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&A[i][j]);
        }

    }

    //for enter elements for B
    printf("enter the elements for matrix B\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&B[i][j]);
        }

    }

    //for enter elements for C
    printf("the elements set  for matrix c are 0\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        C[i][j]=0;
        }

    }

    //printing the matrices

    printf("the matrix A is \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("the matrix B is \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d\t",B[i][j]);
        }
        printf("\n");
    }

    printf("the matrix C is \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    //let us multiply 

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                C[i][j]= C[i][j]+A[i][k]*B[k][j];
            }
        }
    }

    printf("the matrix C after A*B is \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

	
    printf("Hello world!!");
    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#endif