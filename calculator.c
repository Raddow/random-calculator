#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1 = 0.0;
	float n2 = 0.0;
	float n3 = 0.0;
	char operator[2];
	printf("First Number: ");
	scanf("%f", &n1);
	printf("Second Number: ");
	scanf("%f", &n2);
	printf("Type for: \n");
	printf("========================================================================");
	printf("\n|+ for Sum, - for Subtraction, * for Multiplication, / for Division   | \n");
	printf("========================================================================\n");
	scanf("%1s", operator);

	switch(operator[0]){
		case '+':
			n3 = n1+n2;
			break;
		case '-':
			n3 = n1-n2;
			break;
		case '*':
			n3 = n1*n2;
			break;
		case '/':
			n3 = n1/n2;
			break;
		default:
			n3 = 1;
	}
	printf("Result: %.2f\n", n3);
	return 0;
}
