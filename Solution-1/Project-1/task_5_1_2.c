﻿/*
Составить программу вычисления объема цилиндра и конуса,
которые имеют одинаковую высоту hh и одинаковый радиус основания rr.

Входные данные:
Два натуральных числа. Первое rr -- радиус основания в см, 
второе hh -- высота в сантиметрах.

Выходные данные:
Два вещественных числа, записанные через пробел и имеющих
два знака после запятой. Первое число -- объём цилиндра с
высотой hh и радиусом основания rr. Второе число -- объём конуса
с высотой hh и радиусом основания rr.

Справка:
Для числа ππ используйте значение 3.14159265358979323846

Sample Input:
11 29

Sample Output:
11023.85 3674.62

*/

#include <stdio.h>


int task_5_1_2(void) {
	double r, h;
	double cylinder_vol, cone_vol, pi = 3.14159265358979323846;
	scanf_s("%lf %lf", &r, &h); // write input

	cylinder_vol = pi * r * r * h;
	cone_vol = pi * r * r * h / 3;

	printf("%.2lf %.2lf", cylinder_vol, cone_vol);

	return 0;
}