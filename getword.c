#include<stdio.h>
#include<ctype.h>

int main(){

	char name;
	name = getchar();
	putchar(name);


	int rollno;
	char words;
	float marks;
	char listname[10];
	scanf("%d%c%f%s",&rollno,&words,&marks,&listname);

	printf("%d%c%f%s",rollno,words,marks,listname);



return 0;
}