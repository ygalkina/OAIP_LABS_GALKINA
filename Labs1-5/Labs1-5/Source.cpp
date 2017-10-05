/*
Галкина Яна Романовна
Лабораторная работа № 1
Вариант 5
Задание: перевести лот в карат и перевести в унции.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define CARAT_VARIABLE 63.98;
#define OUNCE_VARIABLE 0.007;

int main()
{
	float lot;
	int check = 0;
	printf("Enter lot ");
	check = scanf("%f", &lot);
	if (check == 0)
	{
		printf("Error: 'lot' incorrect input \n");
	}
	else
	{
		float carat = lot * CARAT_VARIABLE;
		printf("\n carat  %9.2f ", carat);
		float ounce = carat * OUNCE_VARIABLE;
		printf("\n ounce %9.2f \n", ounce);
	}
	_getch();
	return 0;
}