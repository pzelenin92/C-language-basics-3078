﻿/*

Написать программу — модель анализа пожарного датчика в помещении,
которая выводит сообщение Fire situation, если температура в комнате 
превысила 60 градусов по Цельсию.

Входные данные:
Одно целое число T -- температура в помещении.

Выходные данные:
Строка Fire situation, если T>60 В противном случае ничего
выводить не нужно.
*/


#include <stdio.h>

int task_6_3_1(void) {
    int x;

    scanf_s("%i", &x);

    if (x > 60) {
        printf("Fire situation");
    }

    return 0;
}