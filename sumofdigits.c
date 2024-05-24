#include <stdio.h>

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#ifndef __CXX_TEST_MAIN__
//Author Arun Singh
// BCA Sem 1 Student 
// ROll no 2414101058
int num1;




int main(){
    int sum = 0;
    int rem = 0;
    printf("Enter the number\n");
    scanf("%d",&num1);
    printf("the entered number is:: %d\n",num1);
	
    while(num1!=0){
        rem = num1%10;
        sum = sum + rem;
        num1 = num1/10;
    }

    printf("the sum of digits is : %d ",sum);
    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#endif