﻿/*
Числа Фибоначчи
Последовательность чисел Фибоначчи определяется следующим образом:
F1=1,F2=1,
F3=F1+F2,
…,
Fk=Fk−2+Fk−1.

Посчитать значение NN-го числа Фибоначчи.

Входные данные:
Одно натуральное число NN, (N≤45)(N≤45)

Выходные данные:
Значение N-го числа Фибоначчи.

Sample Input:
45

Sample Output:
1134903170

*/


#include <stdio.h>

int task_7_1_6(void) {
    int a;
    int f1 = 1, f2 = 1;
    int out;

    scanf_s("%i", &a);

    if (a == 1||a ==2) {
        out = 1;
    }
    else {
        for (int i = 3; i <= a; i++) {
            out = f1 + f2;
            f1 = f2;
            f2 = out;
        }
    }

    printf("%i ", out);

    return 0;
}