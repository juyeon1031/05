#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	char op;
	int result;
	
	printf("enter the calculation:");
	scanf("%d %c %d", &x, &op, &y);
	
	//�����ڿ� ���� ������� ����
	if (op=='+')
		result = x+y; 
	else if (op=='-')
		result = x-y;
	else if (op=='*')
		result = x*y;
	else
		result = x/y;
		
		
	printf("=%i\n", result);
	
	return 0;
	
}
/*	int a,b;
	char x;
	
	scanf("%i %c %i", &a, &x, &b);
	
	if(x=='+')
		printf("%i + %i = %i", a, b, a+b);
	
	else if(x=='-')
		printf("%i - %i = %i", a, b, a-b);	
	
	else if(x=='*')
		printf("%i * %i = %i", a, b, a*b);	
		
	else
		printf("%i / %i = %i", a, b, a/b);
	 
	return 0;
	*/

