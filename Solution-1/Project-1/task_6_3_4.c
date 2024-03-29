﻿/*
Даны две точки: А(х1,у1) и В(х2,у2). Составить программу, определяющую,
которая из точек находится ближе к началу координат.

Входные данные:
Четыре целых числа. Первые два числа -- координаты точки A(первая точка)
, следующие два числа -- координаты точки B(вторая точка).

Выходные данные:
Вывести одно число, номер точки, которая находится ближе к началу
координат. Если расстояния между точками до начала координат равны
- вывести 0.

Sample Input:
1 2
 1 -3

Sample Output:
1


*/


#include <stdio.h>
#include <math.h>

int task_6_3_4(void) {
    int a1, a2;
    int b1, b2;
    double len_a = 0.0, len_b=0.0;


    scanf_s("%i %i", &a1, &a2);
    scanf_s("%i %i", &b1, &b2);

    len_a = sqrt(a1 * a1 + a2 * a2);
    len_b = sqrt(b1 * b1 + b2 * b2);

    if (len_a < len_b) {
        printf("%i", 1);
    }
    else {
        if (len_a == len_b) {
            printf("%i", 0);
        }
        else {
            printf("%i", 2);
        }
        
    }

    return 0;
}