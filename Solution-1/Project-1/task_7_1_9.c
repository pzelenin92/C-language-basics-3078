﻿/*
Делители
Для заданного числа n вывести все его делители и их количество на экран.

Входные данные:
Одно натуральное число N.

Выходные данные:
Делители числа N, записанные через один пробел в порядке возрастания .
Количество делителей на отдельной строке.

Sample Input:
8

Sample Output:
1 2 4 8
4


*/


#include <stdio.h>

int task_7_1_9(void) {
    int a;
    int count=0;

    scanf_s("%i", &a);

    for (int i = 1; i <= a; i++) {
        if (a%i == 0) {
            count++;
            printf("%i ", i);
        }

    }
    printf("\n");
    printf("%i ", count);

    return 0;
}