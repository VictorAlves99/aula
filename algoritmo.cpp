#include<stdio.h>
#include<locale.h>
#include<math.h>

int a, b, c;
int delta = 0;

// f(x)= x^2 + 5x + 6

int main()
{
	setlocale(LC_ALL, "");
	printf("Selecione o a, o b e o c da fun��o a seguir:");
	scanf("%d %d %d", &a, &b, &c);
	printf("Sua fun��o �:");
	printf("%d", a,"x� + %d", b,"x + %d", c);
}