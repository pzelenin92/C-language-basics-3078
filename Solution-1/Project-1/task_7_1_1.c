﻿/*
Написать программу выводящую на экран первые NN натуральных чисел.

Входные данные:
Одно  целое число N, N>0N>0

Выходные данные:
Первые NN натуральных чисел, записанных через пробел.

Sample Input:
8

Sample Output:
1 2 3 4 5 6 7 8

*/


#include <stdio.h>

int task_7_1_1(void) {
    int a;


    scanf_s("%i", &a);

    for (int i = 1; i <= a; i++) {
        printf("%i ", i);
    }


    return 0;
}