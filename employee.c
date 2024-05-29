#include <stdio.h>
#include <string.h>

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#ifndef __CXX_TEST_MAIN__
//Author - Arun Singh
//Roll no 2414101058

struct emp{
    int id;
    char name[50];
    int day;
    char month[10];
    int year;
    float salary;

}e1[10];

int main(){

    
    int number;
    printf("enter the number of employee\n");
    scanf("%d",&number);
    float n;
    for(int i = 0;i<number;i++){
        printf("enter the employee id,name,day of join,month of join,year of join and salary\n");
        scanf("%d %s %d %s %d %f",&e1[i].id,e1[i].name,&e1[i].day,e1[i].month,&e1[i].year,&n);
        e1[i].salary = n;
    }
    printf("the employee data is :\n");
    for(int i = 0;i<number;i++){
        printf("%d\t: %s\t: %d\t: %s\t: %d\t: %.2f:\n",e1[i].id,e1[i].name,e1[i].day,e1[i].month,e1[i].year,e1[i].salary);
    }

    //now month wise total salary
    float month_salary =0;
    char month_detail[10];
    printf("enter the month\n");
    scanf("%s",month_detail);
    for(int i = 0;i<number;i++){
        if(strcmp(e1[i].month,month_detail)==0){
            month_salary = month_salary+e1[i].salary;
        }
    }



    printf("the salary for the month of:\n %s %.2f",month_detail,month_salary);


	
    printf("\nHello world!!");
    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#endif