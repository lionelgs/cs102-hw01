#include <stdio.h>
#include <stdlib.h>




int main(int argc, char* argv[]) {

double num1;
double num2;
char operator;


operator=(argv[1][0]);


num1=atof(argv[2]);
num2=atof(argv[3]);

char addition='+';
char subtraction='-';
char multiplication='x';
char division='/';
double answer=0;

if(operator==addition)
	answer=(num1+num2);

else if(operator==subtraction)
	answer=(num1-num2);

else if(operator==multiplication)
	answer=(num1*num2);

else if(operator==division)
	answer=(num1/num2);
else
	printf("Your operator is invalid. Please use either +,-,x,/.\n");

printf("%f\n",answer);
}



