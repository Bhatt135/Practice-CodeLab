#include <stdio.h>
void add();
int sub();
void mult(int, int);
float div(float, float);
int main()
{
	int b, c, e, f, s;
	float d;
	char a,x;
	printf("What do you want to do");
	scanf("%c", &a);
	switch (a)
	{
	addition:
	case '+':
		add();
		break;
	subsitution:
	case '-':
		s = sub();
		printf("%d", s);
		break;
	multiplication:
	case '*':
		printf("Enter two nubers");
		scanf("%d %d", &e, &f);
		mult(e, f);
		break;
	division:
	case '/':
		printf("Enter two numbers");
		scanf("%d %d", &b, &c);
		d = div(b, c);
		printf("%f", d);
		break;
	default:
		printf("your value is not acceptable");
	}

	printf("\nDo you want to perform any other task?");
	scanf("%c",&x);
	scanf("%c",&x);
	switch (x)
	{
	case '+':
		goto addition;
	case '-':
		goto subsitution;
	case '*':
		goto multiplication;
	case '/':
		goto division;
	default:
		printf("\nThank you for using this calc");
	}
}

// fun without arg & without return value
void add()
{
	int n1, n2;
	printf("Enter two numbers");
	scanf("%d %d", &n1, &n2);
	printf("%d", n1 + n2);
}

// fun without arg & with return value
int sub()
{
	int n1, n2, s;
	printf("Enter two numbers");
	scanf("%d %d", &n1, &n2);
	s = n1 - n2;
	return s;
}

// fun with arg & without return value
void mult(int n1, int n2)
{
	printf("%d", n1 * n2);
}

// fun with arg & with return value
float div(float n1, float n2)
{
	float d;
	d = n1 / n2;
	return d;
}