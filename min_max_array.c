#include <stdio.h>

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#ifndef __CXX_TEST_MAIN__
//Author --- Arun Singh
//BCA Sem1
//Roll no 2414101058

int number_array[100];
int i,j,min,max,size;

int main(){
    printf("enter the size of an array\n");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&number_array[i]);
    }

    for(j=0;j<size;j++){
        printf("%d\t",number_array[j]);
    }

    max=number_array[0];
    min=number_array[0];

    for(int k=0;k<size;k++){
        if(number_array[k]>max){
            max=number_array[k];
        }
        else if(number_array[k]<min){
            min=number_array[k];
        }
    }
	
    printf("\n   hello world!!\n");

    printf("the max element is :%d\n",max);
    printf("the min element is :%d\n",min);
    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#endif