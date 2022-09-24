#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
	float *a,*b;
	int size;
	char c;
	printf("размер векторов: ");
	scanf("%i" ,&size);
	a=malloc(size*sizeof(int)); // Функция выделяет size байтов памяти
	b=malloc(size*sizeof(int)); // Функция выделяет size байтов памяти
	printf("первый вектор: ");
	for (int i=0;i<size;i++) scanf("%f", &a[i]);  //
	printf("второй вектор: ");
	for (int i=0;i<size;i++) scanf("%f", &b[i]);
	   printf("Операция (- + *): ");
	   scanf(" %c" ,&c);
	switch (c)
	{
	case '+':
		printf("результат сложения векторов: ");
			for (int i=0;i<size;i++) printf("%f", a[i]+b[i]);
			printf("\n");
		break;
	case '-':
		printf("результат вычетания векторов: ");
				for (int i=0;i<size;i++) printf("%f", a[i]-b[i]);
				printf("\n");
		break;
	case '*':

		printf("результат скалярного произведения векторов: \n");
			for (int i=0;i<size;i++) printf("%f", a[i]*b[i]);
	printf("\n");
		break;
	default:
		printf("Неизвестная операция\n");
	}
    free(a);
	free(b);
	return 0;
}

// Козаренко Д.А. ИВТ, 4 группа, 2 курс
