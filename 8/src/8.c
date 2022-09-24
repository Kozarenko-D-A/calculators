
#include <stdio.h>
#include <stdlib.h>
int main(int ardc, char *argv[])

{
float a,b;
char c;
  printf("Первое число: ");
   scanf("%f" ,&a);
   printf("Второе число: ");
   scanf("%f" ,&b);
   printf("Операция (-+/*): ");
   scanf(" %c" ,&c);
switch (c)
{
case '+':
	printf("Ответ %f (%c)" ,a+b,c);
	break;
case '-':
	printf("Ответ %f (%c)" ,a-b,c);
	break;
case '/':
	printf("Ответ %f (%c)" ,a/b,c);
	break;
case '*':
	printf("Ответ %f (%c)" ,a*b,c);
	break;
default:
	printf("Неизвестная операция\n");

}
return 0;
}

// Козаренко Д.А. ИВТ, 4 группа, 2 курс
