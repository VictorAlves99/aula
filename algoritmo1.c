#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{

    float a, b, c;
    float  x1, x2;
    float delta;

    // f(x)= x^2 + 5x + 6

	setlocale(LC_ALL, "");
    printf("Selecione o a, o b e o c da função a seguir:\n");
	scanf("%f %f %f", &a, &b, &c);
    printf("Sua função é:");
    printf("%5.0f", a);
    printf("x²\t+");
    printf("%5.0f", b);
    printf("x\t+");
    printf("%5.0f", c);

	delta=b*b-4*a*c;
	printf("\nDelta é igual a: %f", delta);

    if(delta==0){
        x1=(-b+sqrt(delta))/(2*a);
    }
    else{
        if(delta>0){
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("\nx1 = %5.2f", x1);
        printf("\nx2 = %5.2f", x2);
        }
        else{
        printf("\nNão tem número existente sem 'i'");
        }
    }
}
