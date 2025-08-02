#include <stdio.h>

float topla(float a, float b) {
	return a + b;
}
float cikar(float a, float b) {
	return a - b;
}
float carp(float a, float b) {
	return a * b:
float bol(float a, float b) {
	return a / b;
}

int main() {
	printf("Welcome to Basic Calculator\n");
	char operation;
	float a, b;
	float result;

	int valid = 1;

	printf("Select an operation: ");

	scanf("%c", &operation);

	printf("First number: ");
	scanf("%f", &a);

	printf("Second number: ");
	scanf("%f", &b);

	switch (operation) {
		case '+':
			result = topla(a, b);
			break;
		case '-':
			result = cikar(a, b);
			break;
		case '*':
			result = carp(a, b);
			break;
		case '/':
			if (b == 0) {
				printf("Not allowed divide by zero");
				valid = 0;
			} else {
				result = bol(a, b);
			}
			break;
		default:
			printf("Wrong operation");
			break;
	}

	if (valid) {
		printf("Result: %.2f", result);
	}

	return 0;
}
