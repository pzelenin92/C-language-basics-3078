﻿/*
Кнопочный электронный кодовый замок имеет десять кнопок.
Каждая из кнопок имеет свой порядковый номер от 0 до 9.
Правильный код 1024 зашит внутрь замка. Человек, который хочет 
открыть дверь, должен ввести на циферблате последовательно 1, 0, 2 и 4.
Напишите программу, моделирующую работу такого замка.

Входные данные:
Четыре целых числа b1,b2,b3,b4-- номера кнопок, которые нажал человек.

Выходные данные:
Строка open, если введён правильный код. Строка closed,
если введён неправильный код.


Sample Input 1:
1 0 2 4

Sample Output 1:
open

Sampl Input 2:
1 0 2 3

Sample Output 2:
closed

*/


#include <stdio.h>
#include <math.h>

int task_6_3_5(void) {
    int a1, a2, a3, a4;

    scanf_s("%i %i %i %i", &a1, &a2, &a3, &a4);


    if (a1 == 1) {
        if (a2 == 0) {
            if (a3 == 2) {
                if (a4 == 4) {
                    printf("open");
                }
                else {
                    printf("closed");
                }
            }
            else {
                printf("closed");
            }
        }
        else {
            printf("closed");
        }
    }
    else {
        printf("closed");
    }


    return 0;
}